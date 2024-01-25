// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
int main() {

    int x;
    cin >> x;

    int count = 0;
    while (count < 6) {
        if (x % 2 != 0) {
            cout << x << endl;
            count++;
        }
        x++;
    }

}