/**
* @author vinayak-vohra
* @link https://leetcode.com/problems/difference-between-ones-and-zeros-in-row-and-column/?envType=daily-question&envId=2023-12-14
* @brief 2482. Difference Between Ones and Zeros in Row and Column
*
* Time: 171ms; 95.73%
* Mem : 116.49mb; 94.50%
* */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& mat) {
        int nRows = mat.size();
        int nCols = mat[0].size();

        vector<int> rCnt1(nRows, 0);
        vector<int> cCnt1(nCols, 0);

        for (int i = 0; i < nRows; i++)
            for (int j = 0; j < nCols; j++)    
                if (mat[i][j])
                    rCnt1[i]++, cCnt1[j]++;
        
        for(int i = 0; i < nRows; i++)
            for(int j = 0; j < nCols; j++)
                mat[i][j] = 2 * (rCnt1[i] + cCnt1[j]) - nRows  - nCols ;

        return mat;
    }
};