#include <iostream>
using namespace std;

class Student {
public:
    string name, age, place;

    void display() {
        cout << "Hello, my name is " << name
             << ". I am " << age
             << " years old and I am from "
             << place << "." << endl;
    }
};

int main() {

    Student student1, student2;

    student1.name = "Anamika Sabu";
    student1.age = "18";
    student1.place = "Alappuzha";

    student2.name = "Niranjana G R";
    student2.age = "19";
    student2.place = "Kollam";

    student1.display();
    student2.display();

    return 0;
}