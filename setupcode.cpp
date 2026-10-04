#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, place;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your place: ";
    getline(cin, place);

    cout << "\nPersonal Information" << endl;
    cout << "Name: " << name << endl;
    cout << "Place: " << place << endl;

    return 0;
}