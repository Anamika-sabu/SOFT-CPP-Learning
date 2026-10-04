#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    if (a == b) {
        cout << "Both numbers are equal";
    }
    else if (a > b) {
        cout << a << " is the greater number";
    }
    else {
        cout << b << " is the greater number";
    }

    return 0;
}