#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minOperations(vector<int> &nums)
    {
        unordered_map<int, int> memo;
        unsigned int result = 0;

        for (int &x : nums)
            memo[x]++; // count distinct elements

        for (auto &mp : memo)
        {
            if (mp.second < 2) // no operation possible
                return -1;

            result +=
                (mp.second / 3) +
                (mp.second %= 3) / 2 +
                (mp.second %= 2);
        }

        return result;
    }
};
