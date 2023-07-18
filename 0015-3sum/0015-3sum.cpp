class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //fix a number one by one and apply 2sum on remaining array
        //time : N^2    space : O(1)
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for(int i =0;i< nums.size();i++)
        {
            int first = nums[i];
            if(i > 0 && nums[i] == nums[i-1])
                continue;
            int left = i+1;
            int right = nums.size()-1;
            while(left < right)
            {
                if(nums[left] + nums[right] > -first)
                    right--;
                else if(nums[left] + nums[right] < -first)
                    left++;
                else
                {
                    vector<int> smallAns({first,nums[left],nums[right]});
                    ans.push_back(smallAns);
                    while(left<right && nums[left] == nums[left+1])
                        left++;
                    while(left<right && nums[right] == nums[right-1])
                        right--;    
                    left++;
                    right--;
                }
            }
        }
        return ans;
    }
};