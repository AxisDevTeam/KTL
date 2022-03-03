using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.XR.Interaction.Toolkit;

[RequireComponent(typeof(Animator))]
public class Hand : MonoBehaviour
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
    public Transform followTarget;
    public float maxDist = 1f;
    public Rigidbody body;


    // Start is called before the first frame update
    void Start()
    {
        followTarget = controller.gameObject.transform;
        body = GetComponent<Rigidbody>();
        //animator = GetComponent<Animator>();
        body.collisionDetectionMode = CollisionDetectionMode.Continuous;
        body.interpolation = RigidbodyInterpolation.Interpolate;
        body.mass = 20;


        // start teleport
        body.position = followTarget.position;
        body.rotation = followTarget.rotation;
    }

    // Update is called once per frame
    void Update()
    {
        //AnimateHand();
        this.PhysicsMove();
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
        //if (angle > 180.0f) {angle -= 360.0f;}
        

        body.angularVelocity = angle * axis * Mathf.Deg2Rad * rotateSpeed * Time.deltaTime;

        if (Vector3.Distance(transform.position, followTarget.position) > maxDist)
        {
            transform.position = followTarget.position;
            body.velocity = Vector3.zero;
            body.angularVelocity = Vector3.zero;
        }
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
