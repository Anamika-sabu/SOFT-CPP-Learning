#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    if (operation == '+') {
        result = num1 + num2;
        cout << "Answer = " << result;
    }
    else if (operation == '-') {
        result = num1 - num2;
        cout << "Answer = " << result;
    }
    else if (operation == '*') {
        result = num1 * num2;
        cout << "Answer = " << result;
    }
    else if (operation == '/') {
        if (num2 == 0) {
            cout << "Cannot divide by zero";
        }
        else {
            result = num1 / num2;
            cout << "Answer = " << result;
        }
    }
    else {
        cout << "Invalid operator";
    }

    return 0;
}