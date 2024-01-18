// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
int main() {

    int day, month, year;
    cin >> day;

    year = day / 365;
    day %= 365;

    month = day / 30;
    day %= 30;

    cout << year << " ano(s)" << endl;
    cout << month << " mes(es)" << endl;
    cout << day << " dia(s)" << endl;

}