// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
int main() {

    string sellerName;
    double fixedSalary, amountOfTotalSell;
    cin >> sellerName >> fixedSalary >> amountOfTotalSell;

    double bonusSalary = amountOfTotalSell * 0.15;
    double salary = fixedSalary + bonusSalary;

    cout << "TOTAL = R$ " << fixed << setprecision(2) << salary << endl;
    
}