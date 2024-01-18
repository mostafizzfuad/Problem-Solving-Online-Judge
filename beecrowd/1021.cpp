// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
int main() {

    /*************************
    n100 = 100*100 = 10000 poisa
    n50 = 50*100 = 5000 poisa
    n20 = 20*100 = 2000 poisa
    n10 = 10*100 = 1000 poisa
    n5 = 5*100 = 500 poisa
    n2 = 2*100 = 200 poisa
    n1 = 1*100 = 100 poisa
    coin50 = 50 poisa
    coin25 = 25 poisa
    coin10 = 10 poisa
    coin5 = 5 poisa
    coin1 = 1 poisa
    ***************************/

    int n100, n50, n20, n10, n5, n2, n1, coin50, coin25, coin10, coin5, coin1;
    double monetaryValue;
    cin >> monetaryValue;

    int poisa = monetaryValue * 100;

    // calculate note
    n100 = poisa / 10000;
    poisa %= 10000;

    n50 = poisa / 5000;
    poisa %= 5000;

    n20 = poisa / 2000;
    poisa %= 2000;

    n10 = poisa / 1000;
    poisa %= 1000;

    n5 = poisa / 500;
    poisa %= 500;

    n2 = poisa / 200;
    poisa %= 200;

    n1 = poisa / 100;
    poisa %= 100;

    coin50 = poisa / 50;
    poisa %= 50;

    coin25 = poisa / 25;
    poisa %= 25;

    coin10 = poisa / 10;
    poisa %= 10;

    coin5 = poisa / 5;

    coin1 = poisa % 5;

    cout << "NOTAS:" << endl;
    cout << n100 << " nota(s) de R$ 100.00" << endl;
    cout << n50 << " nota(s) de R$ 50.00" << endl;
    cout << n20 << " nota(s) de R$ 20.00" << endl;
    cout << n10 << " nota(s) de R$ 10.00" << endl;
    cout << n5 << " nota(s) de R$ 5.00" << endl;
    cout << n2 << " nota(s) de R$ 2.00" << endl;

    cout << "MOEDAS:" << endl;
    cout << n1 << " moeda(s) de R$ 1.00" << endl;
    cout << coin50 << " moeda(s) de R$ 0.50" << endl;
    cout << coin25 << " moeda(s) de R$ 0.25" << endl;
    cout << coin10 << " moeda(s) de R$ 0.10" << endl;
    cout << coin5 << " moeda(s) de R$ 0.05" << endl;
    cout << coin1 << " moeda(s) de R$ 0.01" << endl;
    
}