#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<double> expenses;
    int choice;
    double amount;

    do {
        cout << "\n1. Add Expense\n2. Show Total\n0. Exit\nChoice: ";
        cin >> choice;

        if(choice == 1) {
            cout << "Amount: ";
            cin >> amount;
            expenses.push_back(amount);
        }

        else if(choice == 2) {
            double total = 0;
            for(double e : expenses)
                total += e;
            cout << "Total Expenses: $" << total << endl;
        }

    } while(choice != 0);

    return 0;
}
