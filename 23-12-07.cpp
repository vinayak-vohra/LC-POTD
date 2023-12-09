/**
 * @author vinayak-vohra
 * @link https://leetcode.com/problems/largest-odd-number-in-string/?envType=daily-question&envId=2023-12-07
 * @brief 1903. Largest Odd Number in String
 *
 * Time: 22ms; 93.28%
 * Mem : 14.11mb; 95.84%
 * */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string largestOddNumber(string &num)
    {
        return string(num.begin(),
                      find_if(num.rbegin(), num.rend(),
                              [](const char &c)
                              { return c % 2; })
                          .base());
    }
};
