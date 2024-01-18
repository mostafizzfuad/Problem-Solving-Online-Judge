// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
int main() {

    int note, n100, n50, n20, n10, n5, n2, n1, temp;
    cin >> note;

    n100 = note / 100;
    temp = note % 100;

    n50 = temp / 50;
    temp %= 50; 

    n20 = temp / 20;
    temp %= 20;

    n10 = temp / 10;
    temp %= 10;

    n5 = temp / 5;
    temp %= 5;

    n2 = temp / 2;
    temp %= 2;

    n1 = temp;

    cout << note << endl;
    cout << n100 << " nota(s) de R$ 100,00" << endl;
    cout << n50 << " nota(s) de R$ 50,00" << endl;
    cout << n20 << " nota(s) de R$ 20,00" << endl;
    cout << n10 << " nota(s) de R$ 10,00" << endl;
    cout << n5 << " nota(s) de R$ 5,00" << endl;
    cout << n2 << " nota(s) de R$ 2,00" << endl;
    cout << n1 << " nota(s) de R$ 1,00" << endl;
    
}