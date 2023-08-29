class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int breakPoint = -1;
        //start searching BP from right to find the just larger permutation
        for(int i = nums.size() - 1; i > 0; i--)
        {
            if(nums[i] > nums[i-1])
            {
                breakPoint = i - 1;
                break;
            }
        }
        cout << breakPoint << endl;
        // it was the last permutation. next is the first one
        if(breakPoint == -1)
        {
            sort(nums.begin(), nums.end());
            return;
        }
            //find the min no. greater than breakpoint
            int minimumButLargerThanBP ,ind;
            for(int i = breakPoint + 1; i < nums.size(); i++)
            {
                if(nums[i] > nums[breakPoint])
                    {   
                        minimumButLargerThanBP = nums[i];
                        ind = i;
                    }
            }
            nums[ind] = nums[breakPoint];
            nums[breakPoint] = minimumButLargerThanBP;

            //reverse the right side of array
            reverse(nums.begin() + breakPoint + 1, nums.end());
    }
};