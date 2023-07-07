class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums)
    {
        int n = nums.size();
        int l =0, r = 0, sum = 0, len = INT_MAX;
        while(r<n)
        {
            sum += nums[r++];
            while(sum >= target)
            {
                len = min(len, r-l);
                sum -= nums[l++];
            }
        }
        return (len == INT_MAX)? 0 : len;
        
    }
};

// first try, ineffecient
        // map<int, int> sum;
        // int ans = INT_MAX;
        // int ans2 = INT_MAX-1;
        // int j =0;
        // sum[-1] = 0;
        // for(int i = 0; i < nums.size(); i++)
        // {
        //     sum[i] = sum[i-1] + nums[i];
        //     if(sum[i] >= target)
        //     {
        //         ans2 = min(i+1, ans2+1);
        //         while(sum[i] - nums[j] >= target)
        //         {
        //             ans2--;
        //             sum[i] -= nums[j];
        //             j++;
        //         }
        //         ans = min(ans, ans2);
        //     }
        // }
        // if(ans == INT_MAX)
        //     return 0;
        // return ans; 