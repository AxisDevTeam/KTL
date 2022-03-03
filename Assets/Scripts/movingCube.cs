
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class movingCube : MonoBehaviour
{
    // Start is called before the first frame update
    public float speed;
    Vector3 start;
    void Start()
    {
        start = transform.position;
    }

    // Update is called once per frame
    void Update()
    {
        transform.position = start + new Vector3(Mathf.Sin(Time.time),0,0);
    }
}
