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
        bool sorted = true;
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

        cout << "minIndex: " << minIndex << endl;

        for (int i = minIndex; i < n - 1; i++)
        {
            if (nums[i] > nums[i + 1])
            {
                cout << "check 1 failed" << endl;
                return false;
            }
        }

        for (int i = 0; i < minIndex - 1; i++)
        {
            if (nums[i] > nums[i + 1])
            {
                cout << "check 2 failed" << endl;
                return false;
            }
        }

        if ((minIndex != 0) && (nums[n - 1] > nums[0]))
        {
            cout << "Check 3 failed!" << endl;
            return false;
        }

        return sorted;
    }
};
// @lc code=end