class Solution {
public:
    
    void sortColors(vector<int>& nums) {
        int zeros = 0, ones =0, twos =0;

        for(int i =0; i < nums.size(); i++)
        {
            if(nums[i] ==0 )
            {
                zeros++;
            }
            else if(nums[i] == 1)
            {
                ones++;
            }
            else
            {
                twos++;
            }
        }
        int i = 0;
        while(zeros)
        {
            nums[i] = 0;
            i++;
            zeros--;
        }
        while(ones)
        {
            nums[i] = 1;
            i++;
            ones--;
        }
        while(twos)
        {
            nums[i] = 2;
            i++;
            twos--;
        }
    }
};