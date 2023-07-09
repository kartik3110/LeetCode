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


class Solution {
public:
    pair<int, int> diameterHelper(TreeNode* root)
    {
        if(!root)
        {
            pair<int, int> ans;
            ans.first = 0;//height
            ans.second = 0;//diamter
            return ans;
        }
        pair<int, int> ans;
        pair<int, int> leftAns = diameterHelper(root->left);
        pair<int, int> rightAns = diameterHelper(root->right);

        int lh = leftAns.first;
        int ld = leftAns.second;
        int rh = rightAns.first;
        int rd = rightAns.second;

        ans.first = 1 + max(lh, rh);
        ans.second = max(lh+rh, max(ld, rd));
        return ans;

    }

    int diameterOfBinaryTree(TreeNode* root) {
        // diameter is the max of ld, rd, (LH+RH)
        return diameterHelper(root).second;
    }
};