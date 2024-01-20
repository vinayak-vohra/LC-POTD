#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    using tmap = unordered_map<int, vector<int>>;

    void makeGraph(TreeNode *root, tmap &graph)
    {
        if (!root || (!root->left && !root->right))
            return;

        if (root->left)
        {
            graph[root->val].push_back(root->left->val);
            graph[root->left->val].push_back(root->val);
            makeGraph(root->left, graph);
        }
        if (root->right)
        {
            graph[root->val].push_back(root->right->val);
            graph[root->right->val].push_back(root->val);
            makeGraph(root->right, graph);
        }
    }

    int amountOfTime(TreeNode *root, int start)
    {
        tmap graph;
        makeGraph(root, graph);
        queue<int> q;
        q.push(start);

        unordered_set<int> visited;

        int time = -1;

        while (!q.empty())
        {
            time++;

            for (int level = q.size(); level > 0; level--)
            {
                int node = q.front();
                q.pop();
                visited.insert(node);
                for (auto &adjNode : graph[node])
                    if (visited.find(adjNode) != visited.end())
                        q.push(adjNode);
            }
        }

        return time;
    }
};
