class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int, int> freq;
        vector<int> ans;
        for(int num: nums)
        {
            freq[num]++;
        }
        for(auto el : freq)
        {
            if(el.second > nums.size() / 3)
            {
                ans.push_back(el.first);
            }   
        }
        return ans;
    }

};