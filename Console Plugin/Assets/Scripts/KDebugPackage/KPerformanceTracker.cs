using System;
using System.Collections;
using System.Collections.Generic;
using System.Threading;
using TMPro.EditorUtilities;
using UnityEngine;

namespace KDebug
{
    public delegate void GCNotification();

    
public interface IPerformanceTracker
{
    float GetFPS { get; }
    float GetCPUms { get; }
    bool WasLongFrame { get; }
    bool WasGCCollected { get; }
}

    public class KPerformanceTracker : MonoBehaviour, IPerformanceTracker
    {
        public float GetFPS => throw new System.NotImplementedException();
    
        public float GetCPUms => throw new System.NotImplementedException();
    
        public bool WasLongFrame => throw new System.NotImplementedException();
    
        public bool WasGCCollected => throw new System.NotImplementedException();
    
        private System.Threading.Thread _gcMonitorThread = null;
        private static bool _bMonitorGC = false;
    
        private static bool _bGCApproaching = false;
        private static bool _bGCComplete = false;
    
        private bool _bLastGCApproaching = false;
        private bool _bLastGCComplete = false;
    
        private static event GCNotification _onnGCApproach = null;
        private static event GCNotification _onnGCComplete = null;

        private static readonly Mutex _mutex = new Mutex(false, "GCNotificationMutex");

        void Awake()
        {
            _onnGCApproach += OnGCApproachNotify;
            _onnGCComplete += OnGCCompleteNotify;
            //System.GC.RegisterForFullGCNotification(10,10);
    
            _bMonitorGC = true;
            //_gcMonitorThread = new Thread(MonitorGC);
            //_gcMonitorThread.Start();

        }
    
        // Start is called before the first frame update
        void Start()
        {
            
        }
    
        // Update is called once per frame
        void Update()
        {
            long memory = System.GC.GetTotalMemory(false);

            Debug.Log("GC Memory: " + memory);


            if (_bGCApproaching != _bLastGCApproaching)
            {
                _bLastGCApproaching = _bGCApproaching;
            }
            else if (_bGCApproaching && _bLastGCApproaching)
            {
                _bGCApproaching = false;
            }
        }
    
        void OnDestroy()
        {
            _bMonitorGC = false;
            _onnGCApproach -= OnGCApproachNotify;
            _onnGCComplete -= OnGCCompleteNotify;
            _gcMonitorThread = null;
        }
    
        // GC Monitoring
    
        private static void MonitorGC()
        {
            Debug.Log("MonitorGC Entry");
            while (_bMonitorGC)
            {
                System.GCNotificationStatus status = System.GC.WaitForFullGCApproach();
                if (status == GCNotificationStatus.Succeeded)
                {
                    _onnGCApproach?.Invoke();
                }
                else
                {
                    break;
                }
    
                status = System.GC.WaitForFullGCComplete();
                if (status == GCNotificationStatus.Succeeded)
                {
                    _onnGCComplete?.Invoke();
                }
                else
                {
                    break;
                }
            }
    
            System.Threading.Thread.Sleep(500);
        }
    
        // GC Notifications
        private static void OnGCApproachNotify()
        {
            _mutex.WaitOne();
            _bGCApproaching = true;
            _mutex.ReleaseMutex();
        }
    
        private static void OnGCCompleteNotify()
        {
            _mutex.WaitOne();
            _bGCComplete = true;
            _mutex.ReleaseMutex();
        }
    }

}

