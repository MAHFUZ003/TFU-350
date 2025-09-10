/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {

        map<TreeNode*, TreeNode*> mp;
        // child,parent
        queue<TreeNode*> q;
        q.push(root);
        vector<int> ans;
        int flag = 0;
        mp[root] = NULL;
        while (!q.empty()) {
            TreeNode* temp;
            temp = q.front();
            q.pop();
            if (temp == target) {
                flag = 1;
            }
            if (temp->left != NULL) {
                q.push(temp->left);
                mp[temp->left] = temp;
            }

            if (temp->right != NULL) {
                q.push(temp->right);
                mp[temp->right] = temp;
            }
        }
        if (flag == 0 || root == NULL) {
            return ans;
        }
        // again now traverse
        // store visit
        // q.clear();
        map<TreeNode*, int> store;
        q.push(target);
        for (int i = 1; i <= k; i++) {
            int cnt = q.size();
            for (int j = 0; j < cnt; j++) {
                TreeNode* temp;

                temp = q.front();
                store[temp] = 1;
                q.pop();
                if (temp->left != NULL && store[temp->left] == 0) {
                    q.push(temp->left);
                }

                if (temp->right != NULL && store[temp->right] == 0) {
                    q.push(temp->right);
                }
                if (mp[temp] != NULL && store[mp[temp]] == 0) {
                    q.push(mp[temp]);
                }
            }
        }

        while (q.size() != 0) {
            TreeNode* temp;
            temp = q.front();
            q.pop();
            ans.push_back(temp->val);
        }
        return ans;
    }
};