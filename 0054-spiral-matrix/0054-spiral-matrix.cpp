class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();      //rows
        int n = matrix[0].size();   //columns
        vector<int> ans;
        int top = 0;
        int bottom = m-1;
        int right = n -1;
        int left = 0;
        int count = 0;
        
        while(count < m*n)
        {
            for(int i = left; (i <= right)  && (count < m * n); i++)
            {
                ans.push_back(matrix[top][i]);
                count++;
            }
            top++;
            for(int i = top; (i <= bottom) && (count < m * n); i++)
            {
                ans.push_back(matrix[i][right]);
                count++;
            }
            right--;
            for(int i = right; (i >= left) && (count < m * n); i--)
            {
                ans.push_back(matrix[bottom][i]);
                count++;
            }
            bottom--;
            for(int i = bottom; (i >= top) && (count < m * n); i--)
            {
                ans.push_back(matrix[i][left]);
                count++;
            }
            left++;
        }
        return ans;

    }
};