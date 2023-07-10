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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root)
        {
            return ans;
        }
        // ans.push_back(root->val);
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        vector<int> levelAns;
        while(!q.empty())
        {
            TreeNode* frontNode = q.front();
            q.pop();
            if(frontNode == NULL)
            {
                ans.push_back(levelAns);
                levelAns.clear();
                if(!q.empty())
                {
                    q.push(NULL);
                }
            }
            else
            {
                levelAns.push_back(frontNode -> val);
                if(frontNode->left)
                    q.push(frontNode->left);
                if(frontNode -> right)
                    q.push(frontNode -> right);
            }
        }
        return ans;
    }
};