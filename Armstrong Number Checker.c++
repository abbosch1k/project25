#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, temp, sum = 0, digits = 0;
    cout << "Enter number: ";
    cin >> num;

    temp = num;

    while(temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;

    while(temp != 0) {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }

    if(sum == num)
        cout << "Armstrong number\n";
    else
        cout << "Not Armstrong\n";

    return 0;
}
