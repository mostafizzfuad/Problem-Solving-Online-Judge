// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
int main() {

    double a, b;
    cin >> a >> b;

    double sumOfWeights = 3.5 + 7.5;
    double avg = ((a * 3.5) + (b * 7.5)) / sumOfWeights;

    printf("MEDIA = %.5lf\n", avg);

    return 0;
}