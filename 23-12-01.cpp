/**
 * @author vinayak-vohra
 * @link https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/?envType=daily-question&envId=2023-12-01
 * @brief 1662. Check If Two String Arrays are Equivalent
 * 
 * Time: 3ms; 70.94%
 * Mem : 11.94mb; 44.27%
 * */ 

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2)
    {
        string s1, s2;

        for (const string &s : word1)
            s1.append(s);

        for (const string &s : word2)
            s2.append(s);

        return s1==s2;
    }
};
