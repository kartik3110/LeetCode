class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start = 0;
        int end = nums.size() -1;
        if(nums.size() == 1)    return nums[0];
        if(nums[0] != nums[1])  return nums[0];
        if(nums[nums.size() -1]  != nums[nums.size() -2])   return nums[nums.size() -1];
        while(start < end)
        {
            int mid = (start + end) / 2;
            if(nums[mid] != nums[mid+1] && nums[mid] != nums[mid - 1])
                return nums[mid];
            else if((mid%2==0 && nums[mid+1] == nums[mid]) ||(mid % 2 != 0 && nums[mid-1] == nums[mid]))
            {
                // left half mein hain
                start = mid+1;
            }
            else
                end = mid;
        }
        return nums[0];
    }
};