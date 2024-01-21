// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
int main() {

    int a, b, c, min, mid, max;
    cin >> a >> b >> c;

    if (a < b && a < c) {
        min = a;
        if (b < c) {
            mid = b;
            max = c;
        }
        else {
            mid = c;
            max = b;
        }
    } 
    else if (b < a && b < c) {
        min = b;
        if (a < c) {
            mid = a;
            max = c;
        }
        else {
            mid = c;
            max = a;
        }
    }
    else {
        min = c;
        if (a < b) {
            mid = a;
            max = b;
        }
        else {
            mid = b;
            max = a;
        }
    }

    cout << min << endl << mid << endl << max << endl;
    cout << endl << a << endl << b << endl << c << endl;
 
}