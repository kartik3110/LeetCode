class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> initial(1, 1);
        ans.push_back(initial);
        for(int i = 1; i < numRows; i++)
        {
            vector<int> row;
            vector<int> prev = ans[i-1];
            int j = 0;
            for(int k = 0; k < prev.size()+1; k++)
            {
                int sum = 0;
                if(k-1 >= 0)
                    sum += prev[k-1];
                if(k < prev.size())
                    sum += prev[k];
                row.push_back(sum);
            }
            ans.push_back(row);
        }
        return ans;
    }
};