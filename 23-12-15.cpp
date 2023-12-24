/**
* @author vinayak-vohra
* @link https://leetcode.com/problems/destination-city/?envType=daily-question&envId=2023-12-07
* @brief 1436. Destination City
*
* Time: 6ms; 92.41%
* Mem : 11.13mb; 51.71%
* */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, bool> hasPath;

        for(vector<string> &path: paths)
            hasPath[paths[0]] = 1, hasPath[paths[1]] |= 0;
            
        for(auto mp: hasPath)
            if(!mp.second) 
                return mp.first;

        return "";
    }
};