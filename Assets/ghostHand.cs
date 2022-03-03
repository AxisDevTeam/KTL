using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ghostHand : MonoBehaviour
{
    public GameObject followObj;
    public SkinnedMeshRenderer meshRenderer;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        float dist = Mathf.Clamp(Vector3.Distance(transform.position,followObj.transform.position)-0.1f,0,1);
        meshRenderer.materials[0].SetFloat("_Distance", dist);
    }
}
