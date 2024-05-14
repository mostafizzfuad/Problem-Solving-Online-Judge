// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    int arr[t];
    long long sum = 0;
    int max = -1000001;
    int min = 1000001;

    for (int i = 0; i < t; i++) 
    {
        cin >> arr[i]; // input
        sum += arr[i]; // sum calculation

        if (arr[i] > max) max = arr[i]; // max calculation
        if (arr[i] < min) min = arr[i]; // min calculation
    }

    cout << min << " " << max << " " << sum << endl;
}