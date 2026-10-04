#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;

    Student(string n) {
        name = n;
    }

    void introduce() {
        cout << "Hello, my name is " << name << endl;
    }
};

int main() {
    Student s1("Fayas");

    s1.introduce();

    return 0;
}