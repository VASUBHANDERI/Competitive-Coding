//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
public:
    string armstrongNumber(int n)
    {
        // code here
        int d0 = n % 10;
        int d1 = (n / 10) % 10;
        int d2 = (n / 100) % 10;

        int sum = round(pow(d0, 3)) + round(pow(d1, 3)) + round(pow(d2, 3));

        if (sum == n)
        {
            return "Yes";
        }
        return "No";
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends