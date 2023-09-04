// we skip same i or j because the initial i has already found all possible quads. even if the window for the 2 pointers decreases, any quads that the smaller window will find would have already been covered in the larger previous window.
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for(int i = 0; i < nums.size(); i++)
        {
            if(i>0 && nums[i] == nums[i-1]) continue;
            for(int j = i+1; j < nums.size(); j++)
            {
                if(j>i+1 && nums[j] == nums[j-1]) continue; // cant use j > 1

                long long sum = (long long) target - nums[i] - nums[j];
                int start = j+1;
                int end = nums.size()-1;
                while(start < end)
                {
                    if((long long)nums[start] + nums[end] == sum)
                    {
                        vector<int> temp({nums[i], nums[j], nums[start], nums[end]});
                        ans.push_back(temp);
                        start++;
                        end--;
                        while (start < end && nums[start] == nums[start - 1]) start++;
                        while (start < end && nums[end] == nums[end + 1]) end--;
                    }
                    else if(nums[start] + nums[end] > sum)  end--;
                    else    start++;
                }
            }
        }
        return ans;
    }
};