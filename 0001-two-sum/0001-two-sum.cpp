#include<unordered_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> ans;
        unordered_map<int,int> m;
        for(int i = 0; i < nums.size(); i++)
        {
            m[nums[i]] = i;
        }
        for(int i = 0; i < nums.size(); i++)
        {
            if(m.count(target - nums[i]) > 0 && m.at(target - nums[i]) != i)
            {
                ans.push_back(i);
                ans.push_back(m.at(target - nums[i]));
                return ans;
            }
        }
        return ans;   
    }
};