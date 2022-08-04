class Solution
{
public:
    vector<int> numberOfPairs(vector<int> &nums)
    {
        vector<int> count(101, 0);
        for (auto value : nums)
        {
            count[value]++;
        }

        int pairs = 0, leftovers = 0;

        for (auto i : count)
        {
            pairs += i / 2;
            leftovers += i % 2;
        }
        return {pairs, leftovers};
    }
};