/**
 * @author vinayak-vohra
 * @link https://leetcode.com/problems/minimum-one-bit-operations-to-make-integers-zero/description/?envType=daily-question&envId=2023-11-30
 * @brief 1611. Minimum One Bit Operations to Make Integers Zero
 * 
 * Time: 0ms; 100%
 * Mem : 6.43mb; 23.05%
 * */ 

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumOneBitOperations(int n)
    {
        // Follows Gray Code logic
        int res = n;

        while (n > 0)
            n >>= 1,      // right shift
                res ^= n; // perform XOR

        return res;
    }
};