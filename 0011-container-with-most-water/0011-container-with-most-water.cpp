class Solution {
public:
    int maxArea(vector<int>& height) {
        int l =0;
        int r = height.size() -1;
        int ans = (r-l) * min(height[l], height[r]);

        while(l < r)
        {
            ans = max(ans, ((r-l) * min(height[l], height[r])));
            if(height[l] <= height[r])
                l++;
            else
                r--;
        }
        return ans;
        
    }
};


//  BRUTE FORCE
//         int ans = 0;
//         for(int i =0; i < height.size(); i++)
//         {
//             for(int j =i+1; j < height.size(); j++)
//             {
//                 ans = max(ans, ((j-i)*min(height[j], height[i])));
//             }
//         }
//         return ans;