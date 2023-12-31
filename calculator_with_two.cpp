#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;
    double result;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    
    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    switch(operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            //Checking for division by zero
            if(num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero." << endl;
                return 1; 
            }
            break;
        default:
            cout << "Invalid operation." << endl;
            return 1; 
    }

    //Result
    cout << "Result: " << result << endl;

    return 0;
}
