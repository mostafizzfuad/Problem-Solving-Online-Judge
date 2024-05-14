// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int k;
        cin >> k;

        int count = 0;
        int i = 1;

        while (1)
        {
            if ((i % 3 != 0) && (i % 10 != 3)) count++;

            if (count == k) {
                cout << i << endl;
                break;
            }

            i++;
        }    
    }
}

// position / count     :   1    2   -   3   4   -   5   6   -   7    8    -    -    9 ...
// value / i            :   1    2   3   4   5   6   7   8   9   10   11   12   13   14 ...

// output : Kth position e kon value ta ache ?
// (count == k) cout << i << endl;