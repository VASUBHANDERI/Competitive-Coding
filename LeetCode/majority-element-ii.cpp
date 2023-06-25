/*
 * @lc app=leetcode id=229 lang=cpp
 *
 * [229] Majority Element II
 */

// @lc code=start
class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        vector<int> ans;
        if (nums.size() == 1)
        {
            return nums;
        }
        else if (nums.size() == 2)
        {
            if (nums[0] != nums[1])
            {
                return nums;
            }
            else
            {
                ans.push_back(nums[0]);
                return ans;
            }
        }
        int c1 = 0;
        int c2 = 0;
        int e1 = INT_MIN;
        int e2 = INT_MIN;

        for (int i = 0; i < nums.size(); i++)
        {
            if (c1 == 0 && e2 != nums[i])
            {
                c1++;
                e1 = nums[i];
            }
            else if (c2 == 0 && e1 != nums[i])
            {
                c2++;
                e2 = nums[i];
            }
            else if (e1 == nums[i])
            {
                c1++;
            }
            else if (e2 == nums[i])
            {
                c2++;
            }
            else
            {
                c1--;
                c2--;
            }
        }

        c1 = 0;
        c2 = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (e1 == nums[i])
                c1++;
            if (e2 == nums[i])
                c2++;
        }

        if (c1 > (nums.size() / 3))
            ans.push_back(e1);
        if (c2 > (nums.size() / 3))
            ans.push_back(e2);

        return ans;
    }
};
// @lc code=end
