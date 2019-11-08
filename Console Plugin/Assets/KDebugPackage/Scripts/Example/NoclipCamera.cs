using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NoclipCamera : MonoBehaviour
{
    private const float c_rot_speed = 3f;
    private const float c_move_speed = 5f;
    private const float c_shiftMulti = 2f;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
       UpdateMovement();
       UpdateMouseLook();
    }

    Vector2 rotation = new Vector2 (0, 0);
    private void UpdateMouseLook()
    {
        rotation.y += Input.GetAxis ("Mouse X");
        rotation.x += -Input.GetAxis ("Mouse Y");
        transform.eulerAngles = (Vector2)rotation * c_rot_speed;

        //Vector2 rot = new Vector2(0,0);
        //rot.x = Input.GetAxis("Mouse X");
        //rot.y = -Input.GetAxis("Mouse Y");
        //
        //rot *= c_rot_speed * Time.deltaTime;
        //
        //Vector3 oldRot = transform.eulerAngles;
        //
        //oldRot = new Vector3(oldRot.x + rot.x, oldRot.y + rot.y, oldRot.z);
        //
        //transform.eulerAngles = oldRot;
    }

    private void UpdateMovement()
    {
        float vert = Input.GetAxis("Vertical");
        float hor = Input.GetAxis("Horizontal");
        float elevation = 0;

        if (Input.GetKey(KeyCode.Space))
        {
            elevation = 1;
        }
        else if (Input.GetKey(KeyCode.LeftControl))
        {
            elevation = -1;
        }


        float speed = c_move_speed;

        if (Input.GetKey(KeyCode.LeftShift))
        {
            speed *= c_shiftMulti;
        }

        float x = speed * hor * Time.deltaTime;
        float y = speed * elevation * Time.deltaTime;
        float z = speed * vert * Time.deltaTime;


        transform.Translate(new Vector3(x, y, z), Space.Self);
    }
}
