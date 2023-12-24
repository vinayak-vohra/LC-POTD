/**
 * @author vinayak-vohra
 * @link https://leetcode.com/problems/buy-two-chocolates/?envType=daily-question&envId=2023-12-20
 * @brief 2706. Buy Two Chocolates
 *
 * Time: 8ms; 82.39%
 * Mem : 46.92mb; 62.77%
 * */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int buyChoco(vector<int> &prices, int money)
    {
        sort(prices.begin(), prices.end());
        int temp = money - prices[0];
        temp -= prices[1];
        if (temp < 0)
            return money;
        return temp;
    }
};