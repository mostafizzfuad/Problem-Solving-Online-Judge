// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
int main() {

    double a, b, c;
    cin >> a >> b >> c;

    if ((b * b - 4 * a * c < 0) || a == 0) {
        cout << "Impossivel calcular" << endl;
    } 
    else {
        double d = sqrt(b * b - 4 * a * c);
        double r1 = (-b + d) / (2 * a);
        double r2 = (-b - d) / (2 * a);

        cout << fixed << setprecision(5);
        cout << "R1 = " << r1 << endl;
        cout << "R2 = " << r2 << endl;
    }

}