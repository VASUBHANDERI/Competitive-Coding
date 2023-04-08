/*
 * @lc app=leetcode id=189 lang=cpp
 *
 * [189] Rotate Array
 */

// @lc code=start
class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        vector<int> temp;
        int n = nums.size();
        k = k % n;
        for (int i = 0; i < n - k; i++)
        {
            temp.push_back(nums[i]);
        }

        for (int i = 0; i + n - k < n; i++)
        {
            nums[i] = nums[i + n - k];
        }

        for (int i = 0; i < n - k; i++)
        {
            nums[i + k] = temp[i];
        }
    }
};
// @lc code=end
