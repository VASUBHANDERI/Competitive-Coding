// /*
//  * @lc app=leetcode id=121 lang=cpp
//  *
//  * [121] Best Time to Buy and Sell Stock
//  */

// // @lc code=start
// #include <bits/stdc++.h>
// using namespace std;

// ########################
// #### Brute Force ######//
// ########################

// class Solution
// {
// public:
//     int maxProfit(vector<int> &prices)
//     {

//         int ans = 0;
//         int min1 = INT_MAX;
//         for (int i = 0; i < prices.size(); i++)
//         {
//             if (prices[i] > min1)
//             {
//                 ans = max(ans, prices[i] - min1);
//             }

//             min1 = min(prices[i], min1);
//         }
//         return ans;
//     }
// };
// // // @lc code=end
/*
 * @lc app=leetcode id=2271 lang=cpp
 *
 * [2149] Rearrange Array Elements by Sign
 */

// @lc code=start
/*
 * @lc app=leetcode id=2271 lang=cpp
 *
 * [2149] Rearrange Array Elements by Sign
 */

// @lc code=start
// #########################
// #### Optimal ######//
// ########################
class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        vector<int> ans(nums.size(), 0);
        int posInd = 0;
        int negInd = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 0)
            {
                ans[posInd] = nums[i];
                posInd += 2;
            }
            else
            {

                ans[negInd] = nums[i];
                negInd += 2;
            }
        }
        return ans;
    }
};
// @lc code=end
