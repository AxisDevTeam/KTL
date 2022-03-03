using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.XR.Interaction.Toolkit;

[RequireComponent(typeof(Animator))]
public class Hand2Grip : MonoBehaviour
{
    // Animation stuff

    /*
    public float speed;
    Animator animator;
    private float gripTarget;
    private float triggerTarget;
    private float gripCurrent;
    private float triggerCurrent;
    */

    //Physics
    [Space]
    public ActionBasedController controller;
    public float followSpeed = 30f;
    public float rotateSpeed = 100f;
    [Space]
    public Vector3 positionOffset;
    public Vector3 rotationOffset;

    [Space]
    public Transform palm;
    public float reachDistance = 0.1f, joinDistance = 0.05f;
    public LayerMask grabbableLayer;

    [Space]
    public Transform followTarget;
    public Rigidbody body;
    [Space]
    public bool isGrabbing;
    public GameObject heldObject;
    public Transform grabPoint;
    public FixedJoint joint1, joint2;

    // Start is called before the first frame update
    void Start()
    {
        followTarget = controller.gameObject.transform;
        body = GetComponent<Rigidbody>();
        //animator = GetComponent<Animator>();
        body.collisionDetectionMode = CollisionDetectionMode.Continuous;
        body.interpolation = RigidbodyInterpolation.Interpolate;
        body.mass = 20;

        // Inputs Setup
        controller.selectAction.action.started += Grab;
        controller.selectAction.action.canceled += Released;


        // start teleport
        body.position = followTarget.position;
        body.rotation = followTarget.rotation;
    }

    private void Grab(InputAction.CallbackContext context)
    {
        if (isGrabbing || heldObject) return;

        Collider[] colliders = Physics.OverlapSphere(palm.position, reachDistance, grabbableLayer);
        if (colliders.Length < 1) return;

        var objectToGrab = colliders[0].transform.gameObject;
        var objectBody = objectToGrab.GetComponent<Rigidbody>();

        if (objectBody != null)
        {
            heldObject = objectBody.gameObject;
        }
        else
        {
            objectBody = objectToGrab.GetComponentInParent<Rigidbody>();
            if(objectBody != null)
            {
                heldObject = objectBody.gameObject;
            }
            else
            {
                return;
            }

        }

        StartCoroutine(GrabObject(colliders[0],objectBody));
    }

    

    private void Released(InputAction.CallbackContext context)
    {
        if(joint1 != null)
        {
            Destroy(joint1);
        }
        if (joint2 != null)
        {
            Destroy(joint2);
        }
        if (grabPoint != null)
        {
            Destroy(grabPoint.gameObject);
        }

        if (heldObject)
        {
            var targetBody = heldObject.GetComponent<Rigidbody>();
            targetBody.collisionDetectionMode = CollisionDetectionMode.Discrete;
            targetBody.interpolation = RigidbodyInterpolation.None;
            heldObject = null;
        }

        isGrabbing = false;
        followTarget = controller.gameObject.transform;
    }

    IEnumerator GrabObject(Collider collider, Rigidbody targetBody)
    {
        isGrabbing = true;

        // Create grab point

        grabPoint = new GameObject().transform;
        grabPoint.position = collider.ClosestPoint(palm.position);
        grabPoint.parent = heldObject.transform;

        // Move hand to point
        followTarget = grabPoint;


        // Wait for action to happen (yield)
        while (grabPoint != null && Vector3.Distance(grabPoint.position, palm.position) > joinDistance)
        {
            yield return new WaitForEndOfFrame();
        }

        // Freeze hand and object
        body.velocity = Vector3.zero;
        body.angularVelocity = Vector3.zero;
        targetBody.velocity = Vector3.zero;
        targetBody.angularVelocity = Vector3.zero;

        targetBody.collisionDetectionMode = CollisionDetectionMode.Continuous;
        targetBody.interpolation = RigidbodyInterpolation.Interpolate;

        // Attach joints
        joint1 = gameObject.AddComponent<FixedJoint>();
        joint1.connectedBody = targetBody;
        joint1.breakForce = float.PositiveInfinity;
        joint1.breakTorque = float.PositiveInfinity;

        joint1.connectedMassScale = 1;
        joint1.massScale = 1;
        joint1.enableCollision = false;
        joint1.enablePreprocessing = false;


        joint2 = heldObject.AddComponent<FixedJoint>();
        joint2.connectedBody = body;
        joint2.breakForce = float.PositiveInfinity;
        joint2.breakTorque = float.PositiveInfinity;
             
        joint2.connectedMassScale = 1;
        joint2.massScale = 1;
        joint2.enableCollision = false;
        joint2.enablePreprocessing = false;

        // Reset follow target

        followTarget = controller.gameObject.transform;
    }



    // Update is called once per frame
    void Update()
    {
        //AnimateHand();
        PhysicsMove();
    }

    private void PhysicsMove()
    {
        // Position
        var positionWithOffset = followTarget.TransformPoint(positionOffset);
        var distance = Vector3.Distance(positionWithOffset, transform.position);
        body.velocity = (positionWithOffset - transform.position).normalized * followSpeed * distance * Time.deltaTime;

        // Rotation
        var rotationWithOffset = followTarget.rotation * Quaternion.Euler(rotationOffset);
        var q = rotationWithOffset * Quaternion.Inverse(body.rotation);
        q.ToAngleAxis(out float angle, out Vector3 axis);
        if (angle > 180.0f) { angle -= 360.0f; }

        body.angularVelocity = angle * axis * Mathf.Deg2Rad * rotateSpeed * Time.deltaTime;
    }

    //Animation Stuff

    /*
    internal void SetTrigger(float v)
    {
        gripTarget = v;
    }

    internal void SetGrip(float v)
    {
        triggerTarget = v;
    }

    void AnimateHand()
    {
        if (gripCurrent != gripTarget)
        {
            gripCurrent = Mathf.MoveTowards(gripCurrent, gripTarget, Time.deltaTime * speed);
            animator.SetFloat("Grip", gripCurrent);
        }
        if (triggerCurrent != triggerTarget)
        {
            triggerCurrent = Mathf.MoveTowards(triggerCurrent, triggerTarget, Time.deltaTime * speed);
            animator.SetFloat("Trigger", triggerCurrent);
        }
    }
    */
}
