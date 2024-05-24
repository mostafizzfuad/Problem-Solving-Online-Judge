// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        int ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            ans += arr[i + 1] - arr[i];
        }

        cout << ans << endl;
    }
}

// a1 a2 a3 a4 ... an  (sorted)
// (a2 - a1) + (a3 - a2) + (a4 - a3) + ... + (an - an-1)