﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProjectileLine : MonoBehaviour
{
    static public ProjectileLine S;
    public float minDist = 0.1f;
    public bool _________;
    public LineRenderer line;
    private GameObject _poi;
    public List<Vector3> points;

    void Awake()
    {
        S = this;
        line = GetComponent<LineRenderer>();
        line.enabled = false;
        points = new List<Vector3>();
    }

    public GameObject poi
    {
        get
        {
            return (_poi);
        }
        set
        {
            _poi = value;
            if (_poi != null)
            {
                line.enabled = false;
                points = new List<Vector3>();
                AddPoint();
            }
        }
    }
    // Use this for initialization

    public void clear()
    {
        _poi = null;
        line.enabled = false;
        points = new List<Vector3>();
    }

    public void AddPoint()
    {
        Vector3 pt = _poi.transform.position;
        if (points.Count > 0 && (pt - lastPoint).magnitude < minDist)
        {
            return;
        }
        if (points.Count == 0)
        {
            Vector3 launchPos = Slingshot.S.launchPoint.transform.position;
            Vector3 launchPosDiff = pt - launchPos;
            // ...it adds an extra bit of line to aid aiming later
            points.Add(pt + launchPosDiff);
            points.Add(pt);
            line.SetVertexCount(2); ;
            // Sets the first two points
            line.SetPosition(0, points[0]);
            line.SetPosition(1, points[1]);
            // Enables the LineRenderer
            line.enabled = true;
        }
        else
        {
            points.Add(pt);
            line.SetVertexCount(points.Count);
            line.SetPosition(points.Count - 1, lastPoint);
            line.enabled = true;
        }
    }

    public Vector3 lastPoint
    {
        get
        {
            if (points == null)
            {
                // If there are no points, returns Vector3.zero
                return (Vector3.zero);
            }
            return (points[points.Count - 1]);
        }
    }
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    void FixedUpdate()
    {
        if (poi == null)
        {
            // If there is no poi, search for one
            if (FollowCam.S.poi != null)
            {
                if (FollowCam.S.poi.tag == "Projectile")
                {
                    poi = FollowCam.S.poi;
                }
                else
                {
                    return; // Return if we didn't find a poi
                }
            }
            else
            {
                return; // Return if we didn't find a poi
            }
        }

        AddPoint();
        if (poi.GetComponent<Rigidbody>().IsSleeping())
        {
            // Once the poi is sleeping, it is cleared
            poi = null;
        }
    }
}
