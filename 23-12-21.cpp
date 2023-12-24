/**
 * @author vinayak-vohra
 * @link https://leetcode.com/problems/widest-vertical-area-between-two-points-containing-no-points/?envType=daily-question&envId=2023-12-21
 * @brief 1637. Widest Vertical Area Between Two Points Containing No Points
 *
 * Time: 225ms; 72.68%
 * Mem : 66.82mb; 37.59%
 * */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxWidthOfVerticalArea(std::vector<std::vector<int>> &points)
    {
        sort(points.begin(), points.end(), [](const auto &a, const auto &b)
             { return a[0] < b[0]; });

        int maxW = 0;

        for (int i = 1; i < points.size(); ++i)
        {
            int w = points[i][0] - points[i - 1][0];
            maxW = max(maxW, w);
        }

        return maxW;
    }
};