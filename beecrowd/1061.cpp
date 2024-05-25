// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string dia, colon;
    int d1, h1, m1, s1, d2, h2, m2, s2, second, minute, hour, day;

    cin >> dia >> d1 >> h1 >> colon >> m1 >> colon >> s1;
    cin >> dia >> d2 >> h2 >> colon >> m2 >> colon >> s2;

    int second1 = s1 + m1 * 60 + h1 * 3600 + d1 * 24 * 3600;
    int second2 = s2 + m2 * 60 + h2 * 3600 + d2 * 24 * 3600;

    second = second2 - second1;

    day = second / (60 * 60 * 24);
    second = second - (60 * 60 * 24 * day);

    hour = second / (60 * 60);
    second = second - (60 * 60 * hour);

    minute = second / 60;
    second = second - (minute * 60);

    cout << day << " dia(s)\n"
         << hour << " hora(s)\n"
         << minute << " minuto(s)\n"
         << second << " segundo(s)" << endl;
}