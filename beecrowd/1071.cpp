// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
int main() {

    int x, y;
    cin >> x >> y;

    if (x == y) {
        cout << "0" << endl;
    }
    else {
        if (x > y) {
            int temp = x;
            x = y;
            y = temp;
        }

        int sum = 0;
        for (int i = x+1; i < y; i++) {
            if (i % 2 != 0) {
                sum += i; 
            }
        }
        cout << sum << endl;
    }
    
}