class Solution {
public:
    string longestPalindrome(string s) {
        // abccbc
        int n = s.length();
        if(n<=1)    return s;
        //if is palindrome bw 2 given indices
        vector<vector<bool>> dp(n, vector<bool>(n, false));
        string maxSubstring = "";
        maxSubstring += s[0];
        // for substrings of len 1
        for(int i = 0; i < n; i++)
            dp[i][i] = true;
        
        // for substrings of len 2
        for(int i = 1; i < n; i++)
        {    
            if(s[i-1] == s[i])
            {
                dp[i-1][i] = true;
                maxSubstring = s.substr(i-1, 2);
            }
        }


        for(int k = 3; k <= n; k++)     // k is the length of substring
        {
            // all substrings of len k
            for(int i = 0;i <= n-k; i++)
            {
                int j = i + k -1;   // ending index
                if(dp[i+1][j-1] && s[i] == s[j])
                {
                    dp[i][j] = true;
                    maxSubstring = s.substr(i, k);
                }
            }
        }
        return maxSubstring;
    }
};