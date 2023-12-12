/**
 * @author vinayak-vohra
 * @link https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/description/?envType=daily-question&envId=2023-12-12
 * @brief 1464. Maximum Product of Two Elements in an Array
 *
 * Time: 3ms; 82.74%
 * Mem : 10.19mb; 94.23%
 * */

#define len(x) x.size()
// #define sorter(x) sort(x.begin(), x.end())

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        // sol 1: 4ms; 58.30% | 10.48mb; 25.23%
        // sorter(nums);
        // return (nums[len(x) - 1] - 1) * (nums[len(x) - 2] - 1);

        // sol 2: 3ms; 82.74% | 10.19mb; 94.23%
        int max1, max2;
        max1 = max2 = INT_MIN;

        for (int i = 0; i < len(nums); i++)
            if (nums[i] > max1)
            {
                max2 = max1;
                max1 = nums[i];
            }
            else if (nums[i] > max2)
                max2 = nums[i];

        return (max1 - 1) * (max2 - 1);
    }
};