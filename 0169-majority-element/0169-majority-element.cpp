//linear time and constant space - boyer moore's voting algorithm
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans;
        int count = 0;
        for(int i =0; i < nums.size(); i++)
        {
            if(count == 0)//
            {
                ans = nums[i];
            }
            if(nums[i] == ans)
                count++;
            else
                count--;
        }

        //after this, run a loop to check if the found element acutally appears more than n/2 times. BUT here we are given that a majority element will always exist. so NP.
        return ans;
    }
};


