// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int a, b, n;
    cin >> a >> b >> n;

    int sq = sqrt(n);

    /// calculate number of divisor of n between a and b
    int count = 0;
    for (int i = 1; i <= sq; i++)
    {
        if (n % i == 0) {
            if (i >= a && i <= b) count++;
            if (n / i != i) { // handling corner case : 64 / 8 == 8
                int j = n / i;
                if (j >= a && j <= b) count++;
            }

        }
    }

    cout << count << endl;

}