// created by mostafizzfuad
// problem link : https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_D
#include <bits/stdc++.h>
using namespace std;
int main() {

    int sec, min, hour;
    cin >> sec;

    hour = sec / 3600;
    sec %= 3600;

    min = sec / 60;
    sec %= 60;

    cout << hour << ":" << min << ":" << sec << endl;

}