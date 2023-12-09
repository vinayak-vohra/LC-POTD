/**
 * @author vinayak-vohra
 * @link https://leetcode.com/problems/largest-3-same-digit-number-in-string/submissions/1111855391/?envType=daily-question&envId=2023-12-02
 * @brief 2264. Largest 3-Same-Digit Number in String
 * 
 * Time: 0ms; 100%
 * Mem : 6.84mb; 48.86%
 * */ 

#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    string largestGoodInteger(string num)
    {
        int __max = -1;
        for (auto it = num.begin(); it < num.end() - 2; it++)
            if (all_of(it, it + 3, [it](const char &c)
                       { return c == *it; }))
                __max = max(__max, (int)*it);

        return __max < 0 ? "" : string(3, (char)__max);
    }
};
