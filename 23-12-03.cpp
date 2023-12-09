/**
 * @author vinayak-vohra
 * @link https://leetcode.com/problems/minimum-time-visiting-all-points/?envType=daily-question&envId=2023-12-02
 * @brief 1266. Minimum Time Visiting All Points
 * 
 * Time: 3ms; 95.43%
 * Mem : 10.48mb; 69.32%
 * */ 

#include <bits/stdc++.h>
using namespace std;

#define dist(pts, idx) (max(abs(pts[idx][0] - pts[idx - 1][0]), abs(pts[idx][1] - pts[idx - 1][1])))

class Solution
{
public:
    int minTimeToVisitAllPoints(vector<vector<int>> &points)
    {
        int time = 0;
        for (int i = 1; i < points.size(); i++)
            time += dist(points, i);
        return time;
    }
};