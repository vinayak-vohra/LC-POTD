/**
 * @author vinayak-vohra
 * @link https://www.leetcode.com/problems/number-of-1-bits/submissions/1109017138/?envType=daily-question&envId=2023-11-29
 * @brief 191. Number of 1 Bits
 * 
 * Time: 0ms; 100%
 * Mem : 6.38mb; 58.12%
 * */ 

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int hammingWeight(uint32_t n)
    {
        int count = 0;
        while (n)
            count += n & 1, // checks last bit
                n = n >> 1; // shift right

        return count;
    }
};