/**
 * @author vinayak-vohra
 * @link https://leetcode.com/problems/construct-string-from-binary-tree/?envType=daily-question&envId=2023-12-07
 * @brief 606. Construct String from Binary Tree
 *
 * Time: 11ms; 81.95%
 * Mem : 55.81mb; 30.77%
 * */

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string tree2str(TreeNode *root)
    {
        if (!root)
            return "";

        string result = to_string(root->val);

        if (root->left || root->right)
        {
            result += "(" + tree2str(root->left) + ")";

            if (root->right)
            {
                result += "(" + tree2str(root->right) + ")";
            }
        }
        return result;
    }
};