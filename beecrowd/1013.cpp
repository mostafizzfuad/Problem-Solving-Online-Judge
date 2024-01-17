// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
int main() {

    int a, b, c;
    cin >> a >> b >> c;

    int maiorAB = (a + b + abs(a - b)) / 2; // calculate max between a and b
    int maxValue = (maiorAB + c + abs(maiorAB - c)) / 2; // calculate max between maiorAB and c

    cout << maxValue << " eh o maior" << endl;
    
}