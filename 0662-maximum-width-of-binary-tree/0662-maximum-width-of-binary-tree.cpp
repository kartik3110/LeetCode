class Solution
{
public:
    int widthOfBinaryTree(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        int ans = 0;
        queue<pair<TreeNode *, long long>> q; 
        q.push({root, 0});
        long long first, last;
        while (!q.empty())
        {
            int minimum = q.front().second;
            int size = q.size();
            for (int i = 0; i < size; i++)
            {                                              
                long long new_index = q.front().second - minimum; 
                TreeNode *node = q.front().first;
                q.pop();
                if (i == 0)
                    first = new_index;
                if (i == size - 1)
                    last = new_index;
                if (node->left)
                {
                    q.push({node->left, new_index * 2 + 1});
                }
                if (node->right)
                {
                    q.push({node->right, new_index*2 + 2});
                }
            }
            ans = max(ans, int(last - first + 1));
        }

        return ans;
    }
};