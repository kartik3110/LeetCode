    class Solution {
    public:
        void setZeroes(vector<vector<int>>& matrix) {

            // int m = matrix[0].size();
            // int n = matrix.size();
            
          
            // int rowZero = 1;
            // for(int i =0; i<n; i++)
            // {
            //     for(int j= 0; j<m; j++)
            //     {
            //         if(matrix[i][j] == 0)
            //         {
            //             // marking ith row
            //             matrix[i][0] = 0;

            //             //checking for jth column
            //             if(j != 0)
                        
            //                 matrix[0][j] =0;
                        
            //             else
                        
            //                 rowZero = 0;
                        
            //         }
            //     }
            // }

            //     for(int i = 1; i < n; i++)
            //     {
            //         for(int j = 1; j < m; j++)
            //         {
            //             if(matrix[i][j] != 0)
            //             {
            //                 //check for row as well as column
            //                 if(matrix[i][0] == 0 || matrix[0][j] == 0)
            //                 {
            //                     matrix[i][j] = 0;
            //                 }
            //             }
            //         }
            //     } 
                
            //      if(matrix[0][0] == 0)
            //     {
            //         for(int j = 0; j < m; j++)
            //         {
            //             matrix[0][j] = 0;
            //         }
            //     }

            //     if(rowZero == 0)
            //     {
            //         for(int i = 0; i < n; i++)
            //         {
            //             matrix[i][0] = 0;
            //         }
            //     }
                
//             }
            


            int m = matrix.size();
            int n = matrix[0].size();
            int rowZero = 1;
            for(int r =0;r<m; r++)
            {
                for(int c= 0; c<n; c++)
                {
                    if(matrix[r][c] == 0)
                    {
                        matrix[0][c] = 0;
                        if(r > 0)
                        {
                            matrix[r][0] = 0;
                        }
                        else
                        {
                            rowZero = 0;
                        }
                    }
                }
            }
                for(int r = 1; r < m; r++)
                {
                    for(int c = 1 ;c < n; c++)
                    {
                        if(matrix[r][0] == 0 || matrix[0][c] == 0 )
                        {
                            matrix[r][c] = 0;
                        }
                    }
                }  
                if(matrix[0][0] == 0)
                {
                    for(int r = 0; r < m; r++)
                    {
                        matrix[r][0] = 0;
                    }
                }
                if(rowZero == 0)
                {
                    for(int c = 0; c < n; c++)
                    {
                        matrix[0][c] = 0;
                    }
                }           
        }
    };


