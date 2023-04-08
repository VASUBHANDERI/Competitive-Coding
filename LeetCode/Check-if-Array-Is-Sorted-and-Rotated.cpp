/*
 * @lc app=leetcode id=1878 lang=cpp
 *
 * [1752] Check if Array Is Sorted and Rotated
 */

// @lc code=start
class Solution
{
public:
    bool check(vector<int> &nums)
    {
        vector<int> temp;
        int n = nums.size();
        int minElement = *min_element(nums.begin(), nums.end());
        int minIndex = n - 1;
        for (int i = n - 1; i > 0; i--)
        {
            if (nums[i] != minElement)
            {
                minIndex--;
            }
            else if (nums[i] == minElement && nums[i - 1] == nums[i])
            {
                minIndex--;
            }
            else
            {
                break;
            }
        }

        for (int i = 0; i < minIndex; i++)
        {
            temp.push_back(nums[i]);
        }

        int curIndex = 0;
        for (int i = 0; i + minIndex < n; i++)
        {
            nums[i] = nums[i + minIndex];
            curIndex++;
        }
        for (int i = 0; i + curIndex < n; i++)
        {
            nums[i + curIndex] = temp[i];
        }

        for (auto it : nums)
        {
            cout << it << " ";
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i + 1] < nums[i])
            {
                return false;
            }
        }
        return true;
    }
};
// @lc code=end
