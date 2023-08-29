class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix[0].size();
        int startVertex = 0;
        //take transpose
        while(startVertex < n)
        {
            int i = startVertex + 1;
            while(i < n)
            {
                swap(matrix[startVertex][i], matrix[i][startVertex]);
                i++;
            }
            startVertex++;
        }
        //reverse each row
        for(int i =0; i < n; i++)
        {
            reverse(matrix[i].begin(), matrix[i].end());
        }
        
    }
};