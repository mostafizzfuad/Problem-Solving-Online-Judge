// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
int main()
{
    while (1)
    {
        int row, col;
        cin >> row >> col;

        if (row == 0 && col == 0) break;

        for (int i = 1; i <= row; i++) 
        {
            for (int j = 1; j <= col; j++) 
            {
                cout << "#";
            }
            cout << endl;
        }
        cout << endl;
    }
    
}