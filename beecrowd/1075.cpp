// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    cout << "2" << endl;
    for (int i = 1; i <= 10000; i++)
    {
        if (i % n == 0) cout << i + 2 << endl;
    }
}