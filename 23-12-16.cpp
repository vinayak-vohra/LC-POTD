/**
* @author vinayak-vohra
* @link https://leetcode.com/problems/valid-anagram/?envType=daily-question&envId=2023-12-07
* @brief 242. Valid Anagram
*
* Time: 0ms; 100%
* Mem : 7.72mb; 46.01%
* */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        int ns = s.size();
        int ts = t.size();

        if(ns != ts) 
            return false;
        
        vector<int> alphas(26, 0);

        for(int i = 0; i < ts; i++)
            alphas[s[i] - 'a']++, alphas[t[i] - 'a']--;

        for(auto &alpha: alphas)
            if(alpha) 
                return false;

        return true;
    }
};