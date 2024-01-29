// created by mostafizzfuad
// problem link : https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_1_C
#include <bits/stdc++.h>
using namespace std;
int main() {

    int length, width;
    cin >> length >> width;

    int area = length * width;
    int perimeter = 2 * (length + width);

    cout << area << " " << perimeter << endl;

}