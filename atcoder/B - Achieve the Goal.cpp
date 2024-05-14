// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, m;
    cin >> n >> k >> m;

    int sum = 0;
    for (int i = 1; i <= n - 1; i++) 
    {
        int marks;
        cin >> marks;

        sum += marks;
    }

    int x = (m * n) - sum;

    if (x < 0) x = 0;
    if (x > k) x = -1;

    cout << x << endl;

}