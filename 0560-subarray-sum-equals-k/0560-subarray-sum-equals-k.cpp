class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans =0;
        int currSum =0;
        map<int,int> m;
        // m[0] = 1;
        for(int i =0; i< nums.size(); i++)
        {
            currSum+= nums[i];
            if(currSum == k)
            {
                ans++;
            }
            if(m.count(currSum - k))
            {
                ans += m[currSum-k];
            }
            m[currSum]++;
        }
        return ans;
    }
};