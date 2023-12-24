/**
 * @author vinayak-vohra
 * @link https://leetcode.com/problems/minimum-changes-to-make-alternating-binary-string/description/?envType=daily-question&envId=2023-12-24
 * @brief 1758. Minimum Changes To Make Alternating Binary String
 *
 * Time: 0ms; 100%
 * Mem : 7.29mb; 86.65%
 * */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minOperations(string s)
    {
        int total_1 = 0, odd_1 = 0;
        int len = s.size();

        for (int i = 0; i < len; i++)
            if (s[i] == '1')
                total_1++, odd_1 += (i & 1);
        int common = total_1 - 2 * odd_1;

        return min(
            (len / 2 + common),
            (len - len / 2 - common));
    }
};

// even_1 = total_1 - odd_1;
// total_0 = s.size() - total_1;
// odd_0 = s.size() / 2 - odd_1;
// even_0 = total_0 - odd_0;

// case 1:
// even_1 + odd_0
// (total_1 - odd_1) + (s.size() / 2 - odd_1)
// floor(s.size() / 2) + [total_1 - 2 * odd_1]

// case 2:
// even_0 + odd_1
// (total_0 - odd_0) + odd_1
// ceil(s.size() / 2) - [total_1 - 2 * odd_1]