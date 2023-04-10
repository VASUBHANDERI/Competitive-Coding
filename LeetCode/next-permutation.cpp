/*
 * @lc app=leetcode id=31 lang=cpp
 *
 * [31] Next Permutation
 */

// @lc code=start
class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int n = nums.size();
        int breakPoint = -1;
        for (int i = n - 2; i >= 0; i--)
        {
            if (nums[i] < nums[i + 1])
            {
                breakPoint = i;
                break;
            }
        }
        if (breakPoint == -1)
        {
            reverse(nums.begin(), nums.end());
        }
        else
        {
            for (int i = n - 1; i > breakPoint; i--)
            {
                if (nums[i] > nums[breakPoint])
                {
                    int t = nums[i];
                    nums[i] = nums[breakPoint];
                    nums[breakPoint] = t;
                    break;
                }
            }

            reverse(nums.begin() + breakPoint + 1, nums.end());
        }
    }
};
// @lc code=end
