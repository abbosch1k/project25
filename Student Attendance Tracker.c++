#include <iostream>
#include <vector>
using namespace std;

struct Student {
    string name;
    bool present;
};

int main() {
    vector<Student> students = {
        {"John", false},
        {"Anna", false},
        {"Mike", false}
    };

    for(int i = 0; i < students.size(); i++) {
        char status;
        cout << "Is " << students[i].name << " present? (y/n): ";
        cin >> status;
        students[i].present = (status == 'y');
    }

    cout << "\nAttendance Report:\n";
    for(auto s : students)
        cout << s.name << " - " 
             << (s.present ? "Present" : "Absent") << endl;

    return 0;
}
