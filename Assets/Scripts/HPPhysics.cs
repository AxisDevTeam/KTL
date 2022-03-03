using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HPPhysics : MonoBehaviour
{
    public Transform target;
    private Rigidbody rb;
    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        rb.velocity = (target.position - transform.position)/Time.fixedDeltaTime;
        Quaternion rotDif = target.rotation * Quaternion.Inverse(transform.rotation);
        rotDif.ToAngleAxis(out float angleInDeg, out Vector3 rotAxis);

        Vector3 rotDifInDeg = angleInDeg * rotAxis;

        rb.angularVelocity = rotDifInDeg * Mathf.Deg2Rad / Time.fixedDeltaTime;
    }
}
