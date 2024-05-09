// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    while (1)
    {
        int num1, num2;
        cin >> num1 >> num2;

        if (num1 == 0 && num2 == 0) break;

        if (num1 <= num2) cout << num1 << " " << num2 << endl;
        else cout << num2 << " " << num1 << endl;
        
        t++;
    }
}
