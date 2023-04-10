/*
 * @lc app=leetcode id=2271 lang=cpp
 *
 * [2149] Rearrange Array Elements by Sign
 */

// @lc code=start
class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        vector<int> pos, neg;
        for (auto it : nums)
        {
            if (it >= 0)
            {
                pos.push_back(it);
            }
            else
            {
                neg.push_back(it);
            }
        }
        int n = nums.size();

        nums.clear();
        int i = 0;
        while (nums.size() < n)
        {
            nums.push_back(pos[i]);
            nums.push_back(neg[i]);
            i++;
        }

        return nums;
    }
};
// @lc code=end
