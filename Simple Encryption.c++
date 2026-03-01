#include <iostream>
using namespace std;

int main() {
    string text;
    int shift;

    cout << "Enter text: ";
    getline(cin, text);
    cout << "Enter shift: ";
    cin >> shift;

    for(int i = 0; i < text.length(); i++) {
        if(isalpha(text[i])) {
            char base = islower(text[i]) ? 'a' : 'A';
            text[i] = (text[i] - base + shift) % 26 + base;
        }
    }

    cout << "Encrypted text: " << text << endl;
    return 0;
}
