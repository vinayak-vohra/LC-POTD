#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> findMatrix(vector<int> &nums)
    {
        unordered_map<int, int> memIndex;
        vector<vector<int>> result(1);

        for (int &num : nums)
        {
            if (memIndex[num] < result.size())
                result[memIndex[num]].push_back(num);

            else
                result.push_back(vector<int>(1, num));

            memIndex[num]++;
        }

        return result;
    }
};