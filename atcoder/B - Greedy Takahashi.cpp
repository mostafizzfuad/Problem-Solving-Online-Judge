// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long T, A, K;
    cin >> T >> A >> K;

    if (T + A <= K) cout << 0 << " " << 0 << endl;
    else if (T >= K) cout << T - K << " " << A << endl;
    else cout << 0 << " " << (T + A) - K << endl;

}