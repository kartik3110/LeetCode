class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int row = 0;
        for(int i = 0; i < m; i++)
        {
            if(matrix[i][0] > target)
            {
                row = (i == 0)? 0: i-1;
                break;
            }
            row = m-1;
        }
        for(int i = 0; i < n; i++)
        {
            if(matrix[row][i] == target)
                return true;
        }
        return false;

    }
    
        // int start = 0;
        // int end = (m*n) -1;
        // int mid;
        // while(start < end)
        // {
        //     mid = (start + end) / 2;
        //     int row = mid/m;
        //     int col = mid % n;
        //     if(matrix[row][col] == target)
        //     {
        //         return true;
        //     }
        //     if(matrix[row][col] > target)
        //     {
        //         end = mid -1;
        //     }
        //     else if(matrix[row][col] < target)
        //     {
        //         start = mid+1;
        //     }
        // }
        // return false;
};