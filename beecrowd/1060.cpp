// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
int main() {

    double arr[6];
    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 0; i < 6; i++) {
        if (arr[i] > 0) {
            count++;
        }
    }
    cout << count << " valores positivos" << endl;
    
}