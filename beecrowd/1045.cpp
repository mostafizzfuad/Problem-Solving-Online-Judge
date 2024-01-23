// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
int main() {

    double arr[3];
    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + 3);

    double a = arr[2];
    double b = arr[1];
    double c = arr[0];

    if (a >= (b + c)) {
        cout << "NAO FORMA TRIANGULO" << endl;
    }
    else {
        if ((a * a) == (b * b + c * c)) {
        cout << "TRIANGULO RETANGULO" << endl;
        }
        if ((a * a) > (b * b + c * c)) {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }
        if ((a * a) < (b * b + c * c)) {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
        if ((a == b) && (a == c)) {
            cout << "TRIANGULO EQUILATERO" << endl;
        }
        if (((a == b) && (a != c)) || ((b == c) && (b != a)) || ((c == a) && (c != b))) {
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }

}