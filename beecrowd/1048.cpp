// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;

void salaryIncrease(double salary, int inPercentage) {
    double newSalary = salary + (salary * inPercentage / 100.0);
    double moneyEarned = newSalary - salary;

    cout << fixed << setprecision(2);
    cout << "Novo salario: " << newSalary << endl;
    cout << "Reajuste ganho: " << moneyEarned << endl;
    cout << "Em percentual: " << inPercentage << " %" << endl;
}

int main() {

    double salary;
    int inPercentage;
    cin >> salary;

    if (salary >= 0 && salary <= 400) {
        inPercentage = 15;
        salaryIncrease(salary, inPercentage);
    }
    else if (salary > 400 && salary <= 800) {
        inPercentage = 12;
        salaryIncrease(salary, inPercentage);
    }
    else if (salary > 800 && salary <= 1200) {
        inPercentage = 10;
        salaryIncrease(salary, inPercentage);
    }
    else if (salary > 1200 && salary <= 2000) {
        inPercentage = 7;
        salaryIncrease(salary, inPercentage);
    }
    else if (salary > 2000) {
        inPercentage = 4;
        salaryIncrease(salary, inPercentage);
    }

}