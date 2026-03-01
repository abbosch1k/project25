#include <iostream>
using namespace std;

int main() {
    double weight, height;

    cout << "Enter weight (kg): ";
    cin >> weight;
    cout << "Enter height (m): ";
    cin >> height;

    double bmi = weight / (height * height);

    cout << "Your BMI: " << bmi << endl;

    if(bmi < 18.5) cout << "Underweight\n";
    else if(bmi < 25) cout << "Normal\n";
    else if(bmi < 30) cout << "Overweight\n";
    else cout << "Obese\n";

    return 0;
}
