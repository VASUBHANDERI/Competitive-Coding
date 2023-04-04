//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> topK(vector<int> &nums, int k)
    {
        // Code here
        map<int, int> frequency;
        for (int i = 0; i < nums.size(); i++)
        {
            frequency[nums[i]]++;
        }

        vector<pair<int, int>> freqPair;
        for (auto it : frequency)
        {
            freqPair.push_back({it.second, it.first});
        }

        sort(freqPair.begin(), freqPair.end(), greater<pair<int, int>>());

        vector<int> ans;
        for (int i = 0; i < k; i++)
        {
            ans.push_back(freqPair[i].second);
        }

        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums)
            cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends