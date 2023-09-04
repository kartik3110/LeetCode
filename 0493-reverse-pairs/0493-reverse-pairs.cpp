class Solution {
public:
    int numReversePairs = 0;
    void mergeSortedArrays(vector<int>& nums, int leftStart, int rightEnd)
    {
        vector<int> temp;
        int leftEnd = (leftStart + rightEnd) / 2;
        int rightStart = leftEnd + 1;
        int l = leftStart;
        //count pairs
        int right = rightStart;
        for(int i = leftStart; i <= leftEnd; i++)
        {
            while(right <= rightEnd && nums[i] > (long long)2*nums[right])  //to prevent overflow, can also use 0.5* nums[i] > nums[right]
            {
                right++;
            }
            numReversePairs += right- rightStart;
        }
        //sort normally
        while(leftStart <= leftEnd && rightStart <= rightEnd)
        {
            if(nums[leftStart] <= nums[rightStart])
            {
                temp.push_back(nums[leftStart]);
                leftStart++;
            }
            else
            {
                temp.push_back(nums[rightStart]);
                rightStart++;
            }
        }
        while (leftStart <= leftEnd)
        {
            temp.push_back(nums[leftStart]);
            leftStart++;
        }

        while (rightStart <= rightEnd)
        {
            temp.push_back(nums[rightStart]);
            rightStart++;
        }

        int i = 0;
        for (int k = l; k <= rightEnd; k++)
        {
            nums[k] = temp[i];
            i++;
        }
    }
    void mergeSort(vector<int>& nums, int start, int end)
    {
        if(start >= end) return;
        int mid = (start + end)/2;
        mergeSort(nums, start, mid);
        mergeSort(nums, mid+1, end);
        mergeSortedArrays(nums, start, end);
    }
    int reversePairs(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() -1);
        return numReversePairs;
    }
};