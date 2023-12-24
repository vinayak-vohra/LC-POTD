/**
 * @author vinayak-vohra
 * @link https://leetcode.com/problems/maximum-score-after-splitting-a-string/?envType=daily-question&envId=2023-12-22
 * @brief 1422. Maximum Score After Splitting a String
 *
 * Time: 0ms; 100%
 * Mem : 6.56mb; 90.32%
 * */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxScore(string s)
    {
        int score = INT_MIN;
        int cnt_0 = 0, cnt_1 = 0;

        for (int i = 0; i < s.size() - 1; i++)
            cnt_0 += (s[i] == '0'),
                cnt_1 += (s[i] == '1'),
                score = std::max(score, cnt_0 - cnt_1);
        cnt_1 += (s[s.size() - 1] == '1');
        return score + cnt_1;
    }
};