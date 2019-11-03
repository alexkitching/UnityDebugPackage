using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rotator : MonoBehaviour
{
    private Vector3 m_axis;
    // Start is called before the first frame update
    void Start()
    {
        m_axis = new Vector3(Random.value, Random.value, Random.value);
    }

    // Update is called once per frame
    void Update()
    {
        transform.Rotate(m_axis, 25f * Time.deltaTime);
    }
}
