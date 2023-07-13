class Solution {
public:
    int strStr(string haystack, string needle) {
        //time complexity O(m*n) - bad
        int w = needle.length();
        for(int i =0; i < haystack.length(); i ++)
        {
            if(needle.compare(haystack.substr(i, w)) == 0)
            {
                return i;
            }
        }
        return -1;
    }
};