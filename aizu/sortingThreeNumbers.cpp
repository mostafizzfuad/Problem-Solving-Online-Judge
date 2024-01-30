// created by mostafizzfuad
// problem link : https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_2_C
#include <bits/stdc++.h>
using namespace std;
int main() {

    int a, b, c, large, mid, small;
    cin >> a >> b >> c;

    if (a > b && a > c) {
        large = a;
        if (b > c) {
            mid = b;
            small = c;
        }
        else {
            mid = c;
            small = b;
        }
    }
    else if (b > a && b > c) {
        large = b;
        if (a > c) {
            mid = a;
            small = c;
        }
        else {
            mid = c;
            small = a;
        }
    }
    else {
        large = c;
        if (a > b) {
            mid = a;
            small = b;
        }
        else {
            mid = b;
            small = a;
        }
    }

    cout << small << " " << mid << " " << large << endl;

}


// another solution using array
#include <bits/stdc++.h>
using namespace std;
int main() {

    int arr[3];
    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
    }

    sort (arr, arr + 3);
    cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;

}
