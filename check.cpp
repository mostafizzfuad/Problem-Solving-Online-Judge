// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
int main() {

    string name;
    double fixedSalary, soldValue;
    cin >> name >> fixedSalary >> soldValue;

    double total = fixedSalary + (soldValue * 15) / 100;

    cout << "TOTAL = R$ " << fixed << setprecision(2) << total << endl;

}