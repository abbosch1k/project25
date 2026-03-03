#include <iostream>
using namespace std;

int main() {
    string text;
    int vowels = 0;

    cout << "Enter text: ";
    getline(cin, text);

    for(char c : text) {
        c = tolower(c);
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
            vowels++;
    }

    cout << "Vowels count: " << vowels << endl;
    return 0;
}
