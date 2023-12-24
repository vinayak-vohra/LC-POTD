/**
 * @author vinayak-vohra
 * @link https://leetcode.com/problems/image-smoother/?envType=daily-question&envId=2023-12-19
 * @brief 661. Image Smoother
 *
 * Time: 30ms; 98.80%
 * Mem : 21.98mb; 94.46%
 * */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> imageSmoother(vector<vector<int>> &img)
    {
        int rows = img.size();
        int cols = img[0].size();
        vector<vector<int>> result(rows, vector<int>(cols, 0));

        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                int total_sum = 0;
                int count = 0;

                for (int l = max(0, i - 1); l < min(rows, i + 2); ++l)
                {
                    for (int k = max(0, j - 1); k < min(cols, j + 2); ++k)
                    {
                        total_sum += img[l][k];
                        count += 1;
                    }
                }

                result[i][j] = total_sum / count;
            }
        }

        return result;
    }
};