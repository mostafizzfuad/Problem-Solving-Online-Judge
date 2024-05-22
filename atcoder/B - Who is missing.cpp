// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // vector<int> cnt(n + 1);
    int cnt[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cnt[i] = 0;
    }

    int size = (4 * n) - 1;

    for (int i = 1; i <= size; i++)
    {
        int a;
        cin >> a;
        cnt[a]++;
    }

    for (int i = 1; i <= n; i++)
    {
        if (cnt[i] == 3) cout << i << endl;
    }
}