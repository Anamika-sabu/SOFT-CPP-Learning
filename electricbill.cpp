#include <iostream>
using namespace std;

int main() {
    int units;
    double billAmount = 0;

    cout << "Enter the number of units consumed: ";
    cin >> units;

    if (units < 0) {
        cout << "Invalid number of units" << endl;
    }
    else if (units <= 100) {
        billAmount = units * 5;
        cout << "Your bill amount is: " << billAmount << endl;
    }
    else if (units <= 200) {
        billAmount = (100 * 5) + (units - 100) * 7;
        cout << "Your bill amount is: " << billAmount << endl;
    }
    else if (units <= 300) {
        billAmount = (100 * 5) + (100 * 7) + (units - 200) * 10;
        cout << "Your bill amount is: " << billAmount << endl;
    }
    else {
        billAmount = (100 * 5) + (100 * 7) + (100 * 10)
                   + (units - 300) * 20;
        cout << "Your bill amount is: " << billAmount << endl;
    }

    return 0;
}