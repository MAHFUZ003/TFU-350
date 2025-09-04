/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
 * };
 **/

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        if (!root) return {};
        
        map<int,int> mp; // level -> last node value
        queue<pair<TreeNode*, int>> q;
        q.push({root, 0});

        while (!q.empty()) {
            auto it = q.front();
            q.pop();

            TreeNode* node = it.first;
            int level = it.second;

            // overwrite so the last one at each level remains
            mp[level] = node->data;

            if (node->left)  q.push({node->left, level+1});
            if (node->right) q.push({node->right, level+1});
        }

        vector<int> ans;
        for (auto &x : mp) ans.push_back(x.second);
        return ans;
    }
};
