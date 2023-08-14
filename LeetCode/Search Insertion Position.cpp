class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int high = nums.size() - 1;
        int low = 0;
        int mid = (high + low) / 2;

        while (low <= high)
        {
            mid = (high + low) / 2;
            if (nums[mid] > target)
            {
                high = mid - 1;
            }
            else if (nums[mid] < target)
            {
                low = mid + 1;
            }
            else
            {
                return mid;
            }
        }

        mid = (low + high) / 2;

        if (target < nums[0])
        {
            return mid;
        }
        return mid + 1;
    }
};