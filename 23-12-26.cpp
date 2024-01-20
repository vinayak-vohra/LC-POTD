#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int mod = 1e9 + 7;
    int solve(int dices, int faces, int target, vector<vector<int>> &dp)
    {
        if (dices == 0 && target == 0)
            return 1;
        if (dices <= 0 || target <= 0)
            return 0;
        if (dp[dices][target] != -1)
            return dp[dices][target];
        int ans = 0;
        for (int i = 1; i <= faces; i++)
        {
            ans = (ans + solve(dices - 1, faces, target - i, dp)) % mod;
        }
        return dp[dices][target] = ans;
    }

    int numRollsToTarget(int n, int k, int target)
    {
        vector<vector<int>> dp(n + 1, vector<int>(target + 1, -1));
        return solve(n, k, target, dp);
    }
};