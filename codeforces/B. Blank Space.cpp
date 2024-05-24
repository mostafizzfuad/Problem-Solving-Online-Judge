// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int count = 0, max = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0) {
                count++;
            }
            else {
                if (count > max) max = count;
                count = 0;
            }
        }

        if (count > max) cout << count << endl;
        else cout << max << endl;
    }
}