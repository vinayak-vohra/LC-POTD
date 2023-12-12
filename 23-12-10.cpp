/**
 * @author vinayak-vohra
 * @link https://leetcode.com/problems/transpose-matrix/?envType=daily-question&envId=2023-12-10
 * @brief 867. Transpose Matrix
 *
 * Time: 6ms; 88.46%
 * Mem : 11.10mb; 30.36%
 * */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> transpose(vector<vector<int>> &matrix)
    {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<vector<int>> newMat(cols, vector<int>(rows, 0));

        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                newMat[j][i] = matrix[i][j];

        return newMat;
    }
};
