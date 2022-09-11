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
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int min = *min_element(a, a + n);
        int max = *max_element(a, a + n);

        if (min >= 0)
        {
            cout << min * min << " " << max * max << endl;
        }
        else if (max <= 0)
        {
            cout << max * max << " " << min * min << endl;
        }
        else if (min < 0 && max > 0)
        {
            if ((min * min) < (max * max))
                cout << max * min << " " << max * max << endl;
            else
                cout << max * min << " " << min * min << endl;
        }
    }
}
