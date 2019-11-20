using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using KDebugPackage;

public partial class KConsoleWindow
{
    public class UpdateContextLogic 
    {
        private Vector3? _lastRayDirection = null;
        private int _lastRaySelection = 0;
        private LayerMask _raycastLayers;
        private const float _dotTolerance = 0.998f;
        private const float _maxRayDist = 1000000f;

        public Camera _camera = null;
        public Camera Camera
        {
            get => _camera == null ? Camera.main : _camera;
            set => _camera = value;
        }

        public delegate void OnContextSetFunc(GameObject a_obj);
        public event OnContextSetFunc OnContextSet;

        public UpdateContextLogic(LayerMask a_layerMask)
        {
            _raycastLayers = a_layerMask;
        }

        public void UpdateContext(Vector3 a_screenPos)
        {
            if (Camera == null)
                return; 

            RaycastHit[] hit = new RaycastHit[10];
            Ray ray = Camera.ScreenPointToRay(a_screenPos);

            int hitCount = Physics.RaycastNonAlloc(ray, hit, _maxRayDist, _raycastLayers.value);

            GameObject context = null;
            if (hitCount > 0)
            {
                int selection = _lastRaySelection;

                if (_lastRayDirection != null)
                {
                    float dot = Vector3.Dot(ray.direction, _lastRayDirection.Value);
                    if (dot > _dotTolerance) // Same Direction - Cycle
                    {
                        selection++;
                        if (selection >= hitCount)
                        {
                            selection = 0;
                        }

                        if (hit[selection].transform == null) // Avoid Possible null Selection
                        {
                            selection = 0;
                        }
                    }
                    else // New Direction - Reset
                    {
                        selection = 0;
                    }
                }

                context = hit[selection].transform.gameObject;

                _lastRayDirection = ray.direction;
                _lastRaySelection = selection;
            }
            else
            {
                _lastRayDirection = null;
                _lastRaySelection = 0;
            }

            if (KDebug.Console.CommandContext != null &&
                context != null &&
                KDebug.Console.CommandContext.GetInstanceID() == context.GetInstanceID())
            {
                return;
            }

            KDebug.Console.CommandContext = context;
            OnContextSet(KDebug.Console.CommandContext);
        }
    }
}
