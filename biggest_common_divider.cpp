#include <iostream>

using namespace std;

//Function to find the greatest common divisor
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

//Function to find the least common multiple
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    cout << "The Least Common Multiple of " << num1 << " and " << num2 << " is: " << lcm(num1, num2) << endl;

    return 0;
}
