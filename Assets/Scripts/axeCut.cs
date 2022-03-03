using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class axeCut : MonoBehaviour
{
    public GameObject point1;
    public GameObject point2;
    public Plane cutPlane;
    public Vector3 previous;
    public Vector3 velocity;
    public float minSpeed = 2f;

    public float cooldown = 0.25f;

    public float timer = 0;

    public bool canCut = true;

    public Collider[] cols = new Collider[2];
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
        velocity = (transform.position - previous) / Time.deltaTime;
        previous = transform.position;

        if (timer < cooldown)
        {
            timer += Time.deltaTime;
            canCut = false;
        }
        else
        {
            canCut = true;
        }
        if (canCut)
        {
            cols[0].enabled = true;
            cols[1].enabled = true;
        }
        else
        {
            cols[0].enabled = false;
            cols[1].enabled = false;
        }
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (canCut == false)
        {
            return;
        }
        
        if (!collision.gameObject.GetComponent<Slice>())
        {
            return;
        }

        if (velocity.magnitude < minSpeed)
        {
            return;
        }
        timer = 0;
        cutPlane.Set3Points(point1.transform.position, point2.transform.position, point1.transform.position + point1.transform.forward);
        collision.gameObject.GetComponent<Slice>().ComputeSlice(cutPlane.normal, (point1.transform.position + point2.transform.position + (point1.transform.position + point1.transform.forward) + (point2.transform.position + point2.transform.forward)) / 4);
    }
}
