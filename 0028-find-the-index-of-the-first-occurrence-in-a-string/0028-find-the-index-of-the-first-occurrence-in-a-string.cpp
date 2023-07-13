#include<cstring>
class Solution {
public:
    int strStr(string haystack, string needle) {
        int w = needle.length();
        for(int i =0; i < haystack.length(); i ++)
        {
            //if (str_inp2.compare(str_inp0) == 0)
            if(needle.compare(haystack.substr(i, w)) == 0)
            {
                return i;
            }
        }
        return -1;
    }
};