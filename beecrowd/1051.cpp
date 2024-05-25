// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
int main()
{
    double salary, tax = 0;
    cin >> salary;

    if (salary > 2000.0) {
        salary -= 2000.0;
        
        if (salary >= 0.0 && salary <= 1000.0) {
            tax = (salary * 8) / 100.0;
            salary -= 1000.0;
        }
        else if (salary > 1000.0) {
            tax = (1000.0 * 8) / 100.0;
            salary -= 1000.0;
        }

        if (salary >= 0.0 && salary <= 1500.0) {
            tax = (salary * 18) / 100.0 + tax;
        }
        else if (salary > 1500.0) {
            tax = (1500 * 18) / 100.0 + tax;
            salary -= 1500.0;
            tax = (salary * 28) / 100.0 + tax;
        }

        cout << "R$ " << fixed << setprecision(2) << tax << endl;
    }
    else {
        cout << "Isento" << endl;
    }
}