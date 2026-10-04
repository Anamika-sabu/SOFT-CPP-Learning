#include <iostream>
using namespace std;

int main() {
    int num, reverse = 0;

    cout << "Enter a number: ";
    cin >> num;

    for (; num != 0; num = num / 10) {
        reverse = reverse * 10 + (num % 10);
    }

    cout << "Reverse of number: " << reverse;

    return 0;
}