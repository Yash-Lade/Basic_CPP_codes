#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;

    cout << "Enter a word or number: ";
    cin >> input;

    //Output Reverse String
    string reversed;
    for (int i = input.length() - 1; i >= 0; i--) {
        reversed += input[i];
    }

    cout << "Backwards: " << reversed << endl;

    return 0;
}
