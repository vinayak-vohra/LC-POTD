/**
 * @author vinayak-vohra
 * @link https://leetcode.com/problems/binary-tree-inorder-traversal/?envType=daily-question&envId=2023-12-07
 * @brief 94. Binary Tree Inorder Traversal
 *
 * Time: 0ms; 100%
 * Mem : 8.71mb; 51.53%
 * */

// struct TreeNode
// {
//     int val;

//     TreeNode *left;
//     TreeNode *right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// };

#include <bits/stdc++.h>
using namespace std;


class Solution
{
    void inorder(TreeNode *root, vector<int> &vectNodes)
    {
        if (!root)
            return;
        inorder(root->left, vectNodes);
        vectNodes.push_back(root->val);
        inorder(root->right, vectNodes);
    }

public:
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> resultSet;
        inorder(root, resultSet);
        return resultSet;
    }
};
