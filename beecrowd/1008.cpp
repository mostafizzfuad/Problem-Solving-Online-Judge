// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
int main() {

    int number, workingHours;
    double amountPerHour;
    cin >> number >> workingHours >> amountPerHour;

    double salary = workingHours * amountPerHour;

    cout << "NUMBER = " << number << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << salary << endl;
    
}