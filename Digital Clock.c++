#include <iostream>
#include <chrono>
#include <thread>
#include <ctime>
using namespace std;

int main() {
    while(true) {
        time_t now = time(0);
        tm *ltm = localtime(&now);

        cout << "\rTime: "
             << ltm->tm_hour << ":"
             << ltm->tm_min << ":"
             << ltm->tm_sec;
        cout.flush();

        this_thread::sleep_for(chrono::seconds(1));
    }

    return 0;
}
