// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    int in = 0, out = 0;
    while (t--)
    {
        int n;
        cin >> n;

        if (n >= 10 && n <= 20) in++;
        else out++;
    }

    cout << in << " in\n" << out << " out" << endl;
}