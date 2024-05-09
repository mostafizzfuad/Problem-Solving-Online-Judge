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
                if (i % 2 == 1) // odd row
                {
                    if (j % 2 == 1) cout << "#"; // odd column
                    else cout << "."; // even column
                }
                else // even row
                {
                    if (j % 2 == 1) cout << "."; // odd column
                    else cout << "#"; // even column
                }
            }
            cout << endl;
        }
        cout << endl;
    }

}