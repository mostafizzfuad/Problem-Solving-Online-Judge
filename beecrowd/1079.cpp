// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        double a, b, c;
        cin >> a >> b >> c;

        a = a * 2;
        b = b * 3;
        c = c * 5;

        double avg = (a + b + c) / 10;

        cout << fixed << setprecision(1) << avg << endl;
    }
}