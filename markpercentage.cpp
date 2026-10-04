#include <iostream>
using namespace std;

int main() {

    string name;
    int age;
    double marks, percentage;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your total marks: ";
    cin >> marks;

    percentage = (marks / 500) * 100;

    cout << "\n--- Student Details ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Marks: " << marks << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    return 0;
}