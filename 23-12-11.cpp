/**
 * @author vinayak-vohra
 * @link https://leetcode.com/problems/element-appearing-more-than-25-in-sorted-array/?envType=daily-question&envId=2023-12-11
 * @brief 1287. Element Appearing More Than 25% In Sorted Array
 *
 * Time: 4ms; 95.89%
 * Mem : 12.79mb; 72.45%
 * */

#include <bits/stdc++.h>
using namespace std;

#define len(x) x.size()
#define lb(arr, qrt, i) lower_bound(arr.begin() + qrt[i - 1], arr.begin() + qrt[i], arr[qrt[i]])
#define ub(arr, qrt, i) upper_bound(arr.begin() + qrt[i], arr.begin() + qrt[i + 1], arr[qrt[i]])

class Solution
{
public:
    int findSpecialInteger(vector<int> &arr)
    {
        int s = len(arr);

        if (s < 3)
            return arr[0];

        vector<int> qrt; // save pivots i.e 25% 50% 75%
        int bkt = s / 4;

        for (int i = 0; i < s - bkt; i += bkt)
        {
            if (arr[i] == arr[i + bkt]) // if 2 pivots are equal, its the answer
                return arr[i];
            qrt.push_back(i); // save indices of quarters}
        }

        qrt.push_back(s - 1); // also add last index

        for (int i = 1; i < len(qrt) - 1; i++)
            if (
                ub(arr, qrt, i) -     // find current pivot in right subarray (upper bound)
                    lb(arr, qrt, i) > // find current pivot in left subarray (lower bound)
                bkt)                  // compare with bucket size i.e 25%
                return arr[qrt[i]];

        return arr[qrt.back()]; // won't reach here as per the question
    }
};
