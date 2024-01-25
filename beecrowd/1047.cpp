// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
int main() {

    int initialHour, initialMinute, finalHour, finalMinute;
    cin >> initialHour >> initialMinute >> finalHour >> finalMinute;

    if (finalMinute < initialMinute) {
        finalMinute += 60;
        finalHour -= 1;
        finalMinute -= initialMinute;

        if (finalHour < initialHour) {
            finalHour += 24;
            finalHour -= initialHour;
        }
        else {
            finalHour -= initialHour;
        }

        cout << "O JOGO DUROU " << finalHour << " HORA(S) E " << finalMinute << " MINUTO(S)" << endl;
    }
    else if (finalMinute > initialMinute) {
        finalMinute -= initialMinute;

        if (finalHour < initialHour) {
            finalHour += 24;
            finalHour -= initialHour;
        }
        else {
            finalHour -= initialHour;
        }

        cout << "O JOGO DUROU " << finalHour << " HORA(S) E " << finalMinute << " MINUTO(S)" << endl;
    }
    else if (initialHour == finalHour && initialMinute == finalMinute) {
        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
    }

}