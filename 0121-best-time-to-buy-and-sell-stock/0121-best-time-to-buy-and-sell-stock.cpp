class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int w = 1;
        // int max =0;
        // int max2 = 0;
        // for(int i =0; i < prices.size(); i++)
        // {
        //     for(int j =0; j < prices.size()-w; j ++)
        //     {
        //       max2 = prices[j+w] - prices[i];
        //       if (max2 > max)
        //       {
        //           max = max2;
        //       }
        //     }   
        //     w++;
        // return max2;
        // }
        int minSoFar = prices[0];
        int maxProfit = 0;
        for(int i =0; i < prices.size(); i++)
        {
            minSoFar = min(prices[i], minSoFar);
            maxProfit = max(maxProfit, prices[i] - minSoFar);
        }
        return maxProfit;
    }
};