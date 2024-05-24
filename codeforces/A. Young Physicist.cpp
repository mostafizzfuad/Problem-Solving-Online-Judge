// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sumOne = 0, sumTwo = 0, sumThree = 0;
    cin >> n;

    int arr[100][100];
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            cin >> arr[i][j];
        }
        sumOne += arr[i][0];
        sumTwo += arr[i][1];
        sumThree += arr[i][2];
    }

    if (sumOne == 0 && sumTwo == 0 && sumThree == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
}