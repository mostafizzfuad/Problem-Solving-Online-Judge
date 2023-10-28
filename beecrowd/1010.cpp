// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
int main() {

    int codeOfProduct1, codeOfProduct2, unitOfProduct1, unitOfProduct2;
    double perUnitPrice1, perUnitPrice2;

    cin >> codeOfProduct1 >> unitOfProduct1 >> perUnitPrice1 >> codeOfProduct2 >> unitOfProduct2 >> perUnitPrice2;

    double total = (unitOfProduct1 * perUnitPrice1) + (unitOfProduct2 * perUnitPrice2);

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total << endl;
    
}