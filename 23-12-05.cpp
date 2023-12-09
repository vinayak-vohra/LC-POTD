/**
 * @author vinayak-vohra
 * @link https://leetcode.com/problems/count-of-matches-in-tournament/?envType=daily-question&envId=2023-12-05
 * @brief 1688. Count of Matches in Tournament
 *
 * Time: 0ms; 100%
 * Mem : 6.26mb; 72.56%
 * */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int numberOfMatches(int n)
    {
        return n - 1;
        // int total_matches = 0;
        // while (n)
        //     total_matches += (n & 1) + (n >>= 1);
        // return total_matches - 1;
    }
};