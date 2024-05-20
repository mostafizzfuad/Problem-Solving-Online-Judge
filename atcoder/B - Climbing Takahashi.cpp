// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;

const int MX = 1e5 + 123;
int arr[MX];

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) 
    {
        cin >> arr[i];
    }

    int ans = arr[1];
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] > arr[i-1]) {
            ans = arr[i];
        }
        else break;
    }
    
    cout << ans << endl;
}
// Hints : he steps onto the next platform if the right platform higher than the current platform. otherwise he stops moving.
