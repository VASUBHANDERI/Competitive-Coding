/*
 * @lc app=leetcode id=128 lang=cpp
 *
 * [128] Longest Consecutive Sequence
 */

// @lc code=start
class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int ans = 1;
        int count = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] != nums[i - 1])
            {
                if (nums[i] == (nums[i - 1] + 1))
                {
                    count++;
                    ans = max(ans, count);
                }
                else
                {

                    count = 1;
                }
            }
        }
        if (nums.size() == 0)
        {
            return 0;
        }
        else
        {
            return ans;
        }
    }
};
// @lc code=end
