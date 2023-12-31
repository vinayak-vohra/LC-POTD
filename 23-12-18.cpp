/**
 * @author vinayak-vohra
 * @link https://leetcode.com/problems/maximum-product-difference-between-two-pairs/description/?envType=daily-question&envId=2023-12-18
 * @brief 1913. Maximum Product Difference Between Two Pairs
 *
 * Time: 10ms; 98.92%
 * Mem : 20.74mb; 30.34%
 * */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProductDifference(vector<int> &nums)
    {
        int max1, max2, min1, min2;
        max1 = max2 = INT_MIN;
        min1 = min2 = INT_MAX;

        for (int &n : nums)
        {
            if (n > max1)
                max2 = max1, max1 = n;
            else if (n > max2)
                max2 = n;

            if (n < min1)
                min2 = min1, min1 = n;
            else if (n < min2)
                min2 = n;
        }

        return max1 * max2 - min1 * min2;
    }
};