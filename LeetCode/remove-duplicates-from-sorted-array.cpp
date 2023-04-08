/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int n = nums.size();
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            s.insert(nums[i]);
        }

        int i = 0;
        for (auto it : s)
        {
            nums[i] = it;
            i++;
        }

        return s.size();
    }
};
// @lc code=end
