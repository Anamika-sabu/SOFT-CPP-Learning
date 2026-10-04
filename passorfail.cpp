#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 0 && marks <= 100) {

        if (marks >= 40) {
            cout << "Congratulations! You passed the exam.";
        }
        else {
            cout << "Sorry! You failed the exam.";
        }

    }
    else {
        cout << "Invalid marks. Enter a value from 0 to 100.";
    }

    return 0;
}