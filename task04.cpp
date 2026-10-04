#include <iostream>
using namespace std;

int main() {
    int rows = 3;

    for (int i = 1; i <= rows; i++) {
        int j = 1;

        while (j <= i) {
            cout << "*";
            j++;
        }

        cout << endl;
    }

    return 0;
}