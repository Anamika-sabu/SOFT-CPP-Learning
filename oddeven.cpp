#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    switch (number % 2) {
        case 0:
            cout << number << " is an even number";
            break;

        case 1:
        case -1:
            cout << number << " is an odd number";
            break;
    }

    return 0;
}