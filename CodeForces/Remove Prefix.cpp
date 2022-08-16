#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <utility>
#include <vector>

using namespace std;

#define int long long

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int pre = 0;
        cin >> n;
        int a[n];
        int visited[n + 1];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n + 1; i++)
        {
            visited[i] = 0;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (visited[a[i]] == 0)
            {
                pre++;
                visited[a[i]] = 1;
            }
            else
            {
                break;
            }
        }
        cout << n - pre << endl;
    }
}
