class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }

        queue<pair<TreeNode*, long long>> q;
        q.push({root, 0});
        int res = 1;

        while (!q.empty()) {
            int cnt = q.size();
            long long start = q.front().second;
            long long end = q.back().second;
            res = max(res, (int)(end - start + 1));

            for (int i = 0; i < cnt; i++) {
                pair<TreeNode*, long long> p = q.front();
                q.pop();

                long long idx = p.second - start; 
                if (p.first->left != NULL)
                    q.push({p.first->left, 2 * idx + 1});
                if (p.first->right != NULL)
                    q.push({p.first->right, 2 * idx + 2});
            }
        }
        return res;
    }
};
