class Solution
{
public:
    int longestAlternatingSubarray(vector<int> &nums, int threshold)
    {
        int n = nums.size();
        int l = 0;
        int r = 0;
        int maxLength = 0;
        while (l < n && r < n)
        {
            if (nums[l] % 2 != 0 || nums[l] > threshold)
            {
                if (l + 1 < n)
                {
                    l++;
                    r = l;
                }
                else
                {
                    break;
                }
            }
            else
            {
                if (r + 1 < n)
                {
                    r++;
                }
                else
                {
                    maxLength = max(r - l + 1, maxLength);
                    break;
                }

                if (nums[r] % 2 == nums[r - 1] % 2 || nums[r] > threshold)
                {
                    maxLength = max(r - l, maxLength);
                    l = r;
                }
            }
        }
        return maxLength;
    }
};