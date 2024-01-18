// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
int main() {

    int hour, minute, second;
    cin >> second;

    hour = second / 3600;
    second %= 3600;

    minute = second / 60;
    second %= 60;

    cout << hour << ":" << minute << ":" << second << endl;

}