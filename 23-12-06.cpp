/**
 * @author vinayak-vohra
 * @link https://leetcode.com/problems/calculate-money-in-leetcode-bank/?envType=daily-question&envId=2023-12-06
 * @brief 1716. Calculate Money in Leetcode Bank
 *
 * Time: 0ms; 100%
 * Mem : 6.20mb; 98.40%
 * */

#include <bits/stdc++.h>
using namespace std;

#define sumAp(a, n, d) ((n * (2 * a + (n - 1) * d)) / 2)
class Solution
{
public:
    int totalMoney(int n)
    {
        int weeks = n / 7;
        int leftDays = n % 7;

        return weeks * sumAp(1, 7, 1) +
               sumAp(0, weeks, 7) +
               sumAp((1 + weeks), leftDays, 1);
    }
};
