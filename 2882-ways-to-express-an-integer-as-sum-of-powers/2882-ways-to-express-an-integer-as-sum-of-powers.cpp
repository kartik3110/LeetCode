class Solution {
public:
    const int MOD = 1000000007;
    int getWaysHelper(int a, int b, int start, int** memo)
    {
        //base case
        if(a == 0)
            return 1;
        if(pow(start, b) > a || a < 0)
        {
            return 0;
        }
        if(memo[a][start] != -1)
            return memo[a][start];
        //recursion
        int x = getWaysHelper(a - pow(start, b), b, start+1,memo) % MOD;
        int y = getWaysHelper(a, b, start+1,memo) % MOD;
        int ans= (x + y) % MOD;
        memo[a][start] = ans;
        return ans;
    }
    int numberOfWays(int n, int x) {
        int** memo = new int*[n+1];
        for(int i = 0; i <= n; i++)
        {
            memo[i] = new int[n+1];
            for(int j = 0; j <= n; j++)
            {
                memo[i][j] = -1;
            }
        }
        return getWaysHelper(n, x, 1, memo);
    }
};