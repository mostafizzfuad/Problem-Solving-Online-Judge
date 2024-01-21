// created by mostafizzfuad
#include <bits/stdc++.h>
using namespace std;
int main() {

    double a, b, c, d;
    cin >> a >> b >> c >> d;

    double avg = ((a * 2) + (b * 3) + (c * 4) + (d * 1)) / 10.0;

    cout << fixed << setprecision(1);
    cout << "Media: " << avg << endl;

    if (avg >= 7) {
        cout << "Aluno aprovado." << endl;
    }
    else if (avg < 5) {
        cout << "Aluno reprovado." << endl;
    }
    else if (avg >= 5 && avg < 7) {
        cout << "Aluno em exame." << endl;
        double newExamMark;
        cin >> newExamMark;
        cout << "Nota do exame: " << newExamMark << endl;
        avg = (avg + newExamMark) / 2;
        if (avg >= 5) {
            cout << "Aluno aprovado." << endl;
        }
        else {
            cout << "Aluno reprovado." << endl;
        }
        cout << "Media final: " << avg << endl;
    }
}