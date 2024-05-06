// created by mostafizzfuad
// problem link : https://atcoder.jp/contests/abc235/tasks/abc235_a?lang=en
#include <bits/stdc++.h>
using namespace std;
int main() {

    int num, a, b, c;
    cin >> num;

    c = num % 10;
    num /= 10;

    b = num % 10;
    num /= 10;

    a = num % 10;

    int abc = (a * 100) + (b * 10) + c;
    int bca = (b * 100) + (c * 10) + a;
    int cab = (c * 100) + (a * 10) + b;

    int sum = abc + bca + cab;
    cout << sum << endl;
    
}