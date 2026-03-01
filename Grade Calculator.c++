#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter score: ";
    cin >> score;

    if(score >= 90) cout << "Grade A\n";
    else if(score >= 80) cout << "Grade B\n";
    else if(score >= 70) cout << "Grade C\n";
    else if(score >= 60) cout << "Grade D\n";
    else cout << "Grade F\n";

    return 0;
}
