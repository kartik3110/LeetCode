class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        map<int, int> sum;
        int currSum =0;
        int ans = INT_MAX;
        int ans2 = INT_MAX-1;
        int j =0;
        sum[-1] = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            // currSum += nums[i];
            sum[i] = sum[i-1] + nums[i];

            if(sum[i] >= target)
            {
                ans2 = min(i+1, ans2+1);
                while(sum[i] - nums[j] >= target)
                {
                    ans2--;
                    sum[i] -= nums[j];
                    j++;
                }
                ans = min(ans, ans2);
            }
        }

        
        // for(int i = 1; i < nums.size()+1; i++)
        // {
            
        // }
        if(ans == INT_MAX)
            return 0;
        return ans; 
    }
};