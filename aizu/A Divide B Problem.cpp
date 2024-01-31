// created by mostafizzfuad
// problem link : https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_4_A
#include <bits/stdc++.h>
using namespace std;
int main() {

    int a, b;
    cin >> a >> b;

    int d = a / b;
    int r = a % b;
    double f = (double)a / b;

    cout << d << " " << r << " " << fixed << setprecision(5) << f << endl;

}