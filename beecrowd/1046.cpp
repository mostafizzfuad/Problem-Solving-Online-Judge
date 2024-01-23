// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
int main() {

    int a, b, durationOfGame;
    cin >> a >> b;

    if (a > b) {
        durationOfGame = (24 - a) + b;
        cout << "O JOGO DUROU " << durationOfGame << " HORA(S)" << endl;
    }
    else if (a < b) {
        durationOfGame = b - a;
        cout << "O JOGO DUROU " << durationOfGame << " HORA(S)" << endl;
    }
    else {
        cout << "O JOGO DUROU 24 HORA(S)" << endl;
    }

}