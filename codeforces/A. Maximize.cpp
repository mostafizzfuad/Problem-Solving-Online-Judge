// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;

        int mx = -1e9, ans = 1;
        for (int y = 1; y < x; y++)
        {
            int k = __gcd(x, y) + y;
            if (k > mx) {
                mx = k;
                ans = y;
            }
        }

        cout << ans << endl;
    }
}