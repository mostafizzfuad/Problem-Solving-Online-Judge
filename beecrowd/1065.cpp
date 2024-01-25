// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
int main() {

    int arr[5];
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    int count = 0;
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }

    cout << count << " valores pares" << endl;
    
}