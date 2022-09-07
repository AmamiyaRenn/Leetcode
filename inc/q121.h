#include "including.h"

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int ans = 0, priceMin = prices[0];
        for (int price : prices)
        {
            int profit = price - priceMin;
            ans = profit > ans ? profit : ans;
            priceMin = priceMin > price ? price : priceMin;
        }
        return ans;
    }
};