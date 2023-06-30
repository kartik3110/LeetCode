class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        // int n = nums.size() -1;
        //each element is from [1 to n]
        // unordered_map<int, int> m;
        sort(nums.begin(), nums.end());

        for(int i =1; i <= nums.size(); i++)
        {
            if(nums[i] == nums[i-1])
            {
                return nums[i];
            }
        }
        return -1;        
    }
};