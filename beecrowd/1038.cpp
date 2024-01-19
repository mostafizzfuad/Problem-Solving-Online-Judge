// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
int main() {

    double productCode, productQuantity;
    cin >> productCode >> productQuantity;

    cout << fixed << setprecision(2);
    if (productCode == 1) {
        cout << "Total: R$ " << productQuantity * 4 << endl;
    }
    else if (productCode == 2) {
        cout << "Total: R$ " << productQuantity * 4.5 << endl;
    }
    else if (productCode == 3) {
        cout << "Total: R$ " << productQuantity * 5 << endl;
    }
    else if (productCode == 4) {
        cout << "Total: R$ " << productQuantity * 2 << endl;
    }
    else {
        cout << "Total: R$ " << productQuantity * 1.5 << endl;
    }
    
}