/*
 * @lc app=leetcode id=189 lang=cpp
 *
 * [189] Rotate Array
 */

// @lc code=start
class Solution
{
public:
    void reverse(vector<int> &nums, int i, int j)
    {
        while (i < j)
        {
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
            j--;
        }
    }
    void rotate(vector<int> &nums, int k)
    {

        int n = nums.size();
        k = k % n;
        // reversing first n-k elements

        reverse(nums, 0, n - k - 1);

        // reversing last k elements

        reverse(nums, n - k, n - 1);

        // reversing resultant array

        reverse(nums, 0, n - 1);
    }
};
// @lc code=end