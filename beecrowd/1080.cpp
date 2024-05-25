// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100];
    for (int i = 0; i < 100; i++)
    {
        cin >> arr[i];
    }

    int max = arr[0];
    int position;
    for (int i = 1; i < 100; i++)
    {
        if (arr[i] > max) {
            max = arr[i];
            position = i + 1;
        }
    }

    cout << max << endl;
    cout << position << endl;
}