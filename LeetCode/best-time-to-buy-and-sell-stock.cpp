/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {

        int ans = 0;
        int min1 = INT_MAX;
        for (int i = 0; i < prices.size(); i++)
        {
            if (prices[i] > min1)
            {
                ans = max(ans, prices[i] - min1);
            }

            min1 = min(prices[i], min1);
        }
        return ans;
    }
};
// // @lc code=end
