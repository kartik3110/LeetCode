// O(logN) Binary Exponentiation
class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;
        // need a long variable of n as most -ve int is not same as most +ve int
        long long nn = n;   //cant be double as doesnt allow using '%'
        if(nn < 0)
            nn*= -1;

        while(nn>0)
        {
            if(nn % 2 == 1)   //odd
            {
                ans = ans* x;   //ans is only updated here
                nn = nn-1;
            }
            else
            {
                x = x*x;
                nn = nn/2;
            }
        }
        if(n < 0)  return 1.0/ans;
        return ans;
    }
};