#include <iostream>
using namespace std;

int main() {
    int base, exp;
    long long result = 1;

    cout << "Base: ";
    cin >> base;
    cout << "Exponent: ";
    cin >> exp;

    for(int i = 0; i < exp; i++)
        result *= base;

    cout << "Result: " << result << endl;
    return 0;
}
