#include <iostream>
using namespace std;

int main() {
    string message;

    cout << "Type 'exit' to stop\n";

    while(true) {
        cout << "You: ";
        getline(cin, message);

        if(message == "exit")
            break;

        cout << "Bot: I received -> " << message << endl;
    }

    return 0;
}
