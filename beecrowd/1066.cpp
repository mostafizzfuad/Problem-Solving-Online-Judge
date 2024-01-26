// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
int main() {

    int arr[5];
    int even = 0, odd = 0, positive = 0, negative = 0;

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) even++;
        if (arr[i] % 2 != 0) odd++;
        if (arr[i] > 0) positive++;
        if (arr[i] < 0) negative++;
    }

    cout << even << " valor(es) par(es)" << endl;
    cout << odd << " valor(es) impar(es)" << endl;
    cout << positive << " valor(es) positivo(s)" << endl;
    cout << negative << " valor(es) negativo(s)" << endl;

}