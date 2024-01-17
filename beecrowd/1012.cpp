// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
int main() {

    double a, b, c;
    cin >> a >> b >> c;

    double triangle = 0.5 * a * c;
    double circle = 3.14159 * c * c;
    double trapezium = ((a + b) / 2) * c;
    double square = b * b;
    double rectangle = a * b;

    cout << fixed << setprecision(3);

    cout << "TRIANGULO: " << triangle << endl;
    cout << "CIRCULO: " << circle << endl;
    cout << "TRAPEZIO: " << trapezium << endl;
    cout << "QUADRADO: " << square << endl;
    cout << "RETANGULO: " << rectangle << endl;
    
}