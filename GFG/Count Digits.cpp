//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int evenlyDivides(int N)
    {
        // code here
        int ans = 0;
        int Num = N;
        while (N > 0)
        {
            int d = N % 10;
            if (d > 0)
            {
                if (Num % d == 0)
                {
                    ans++;
                }
            }
            N = N / 10;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0;
}
// } Driver Code Ends