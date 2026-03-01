#include <iostream>
using namespace std;

int main() {
    double p,r,t;
    cout << "Principal: ";
    cin >> p;
    cout << "Rate (%): ";
    cin >> r;
    cout << "Time (years): ";
    cin >> t;

    double interest = (p*r*t)/100;
    cout << "Simple Interest: " << interest << endl;

    return 0;
}
