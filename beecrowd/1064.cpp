// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
int main() {

    double arr[6];
    int positiveCount = 0;

    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }

    double sum = 0;
    for (int i = 0; i < 6; i++) {
        if (arr[i] > 0) {
            sum += arr[i];
            positiveCount++;
        }
    }

    double avg = sum / positiveCount;

    cout << positiveCount << " valores positivos" << endl;
    cout << fixed << setprecision(1) << avg << endl;
    
}