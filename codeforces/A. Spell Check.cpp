// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--) 
    {
        int strLen;
        cin >> strLen;

        string s, c = "Timru";
        cin >> s;

        if (strLen != 5) {
            cout << "NO" << endl;
        } 
        else {
            sort(s.begin(), s.end());
            if (s == c) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
}


// another solution 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int strLen;
        cin >> strLen;

        string s, c = "Timru";
        cin >> s;

        sort(s.begin(), s.end());
       
        if (s == c) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
