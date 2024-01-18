// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
int main() {

    int spentTime, avgSpeed;
    cin >> spentTime >> avgSpeed;

    // distance = avgSpeed * spentTime (s = vt)
    // given 12km/L, So, fuelNedded = distance / 12

    cout << fixed << setprecision(3) << (avgSpeed * spentTime) / 12.0 << endl;

}