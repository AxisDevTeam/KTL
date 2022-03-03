using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class twoHandedFake : MonoBehaviour
{
    public GameObject leftHand;
    public GameObject rightHand;
    public GameObject heldObject;

    public float followSpeed = 10f;
    public float rotateSpeed = 10f;
    [Space]
    public Vector3 positionWithOffset;
    public float distance;
    public Vector3 finalV;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        var rot = Quaternion.FromToRotation(Vector3.up, leftHand.transform.position - rightHand.transform.position);
        //heldObject.GetComponent<Rigidbody>().AddRelativeTorque(rot.eulerAngles, ForceMode.Impulse);
        //heldObject.transform.position = (rightHand.transform.position + leftHand.transform.position) / 2;

        var body = heldObject.GetComponent<Rigidbody>();

        positionWithOffset = (rightHand.transform.position + leftHand.transform.position) / 2;
        distance = Vector3.Distance(positionWithOffset, heldObject.transform.position);
        finalV = (positionWithOffset - heldObject.transform.position).normalized * followSpeed * distance * Time.deltaTime;
        //body.velocity = finalV;
        //body.AddForce(finalV, ForceMode.Impulse);
        body.MovePosition(positionWithOffset);

        // Rotation
        var rotationWithOffset = rot;
        var q = rotationWithOffset * Quaternion.Inverse(body.rotation);
        q.ToAngleAxis(out float angle, out Vector3 axis);
        body.angularVelocity = angle * axis * Mathf.Deg2Rad * rotateSpeed * Time.deltaTime;
    }

}
