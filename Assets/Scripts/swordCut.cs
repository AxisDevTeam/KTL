using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

public class swordCut : MonoBehaviour
{
    public Transform point1;
    public Transform point2;
    public List<GameObject> cutObject = new List<GameObject>();
    public Vector3 start;
    public Vector3 start2;
    public Vector3 end;
    public Vector3 end2;
    public Plane slice;
    public float sliceSpeed;

    public XRGrabInteractable xrg;


    public List<Collider> swordColliders = new List<Collider>();
    // Start is called before the first frame update
    void Start()
    {
        xrg = GetComponent<XRGrabInteractable>();
    }

    // Update is called once per frame
    void Update()
    {
        if(start != Vector3.zero && start2 != Vector3.zero && end != Vector3.zero && end2 != Vector3.zero && cutObject.Count != 0)
        {
            slice.Set3Points(start, start2, end);
            Debug.DrawRay(start, slice.normal * 5f);
            StartCoroutine("cut");
            
            start = Vector3.zero;
            start2 = Vector3.zero;
            end = Vector3.zero;
            cutObject.Clear();
        }
        
        /*
        // enable collision if moving slowly
        if (GetComponent<Rigidbody>().velocity.magnitude > sliceSpeed)
        {

            foreach (var col in swordColliders)
            {
                col.enabled = false;
            }
        }
        else
        {
            if (swordColliders[0].enabled == false)
            {
                foreach (var col in swordColliders)
                {
                    col.enabled = true;
                }
            }

        }
        */
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.GetComponent<Slice>())
        {
            cutObject.Add(other.gameObject);
            start = point1.position;
            start2 = point2.position;
        }
    }
    private void OnTriggerExit(Collider other)
    {
        if(cutObject.Contains(other.gameObject))
        {
            end = point1.position;
            end2 = point2.position;
        }
    }

    IEnumerator cut()
    {
        foreach(var obj in cutObject)
        {
            obj.GetComponent<Slice>().ComputeSlice(slice.normal, (start + start2 + end + end2) / 4);
        }
        yield return null;
    }
}
