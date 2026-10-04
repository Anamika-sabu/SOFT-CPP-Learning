#include <iostream>
using namespace std;

class Student {
public:
    string name, school, college, course;

    void showDetails() {
        cout << "Name: " << name << endl;
        cout << "School: " << school << endl;
        cout << "College: " << college << endl;
        cout << "Course: " << course << endl;
    }
};

int main() {

    Student student1;

    student1.name = "Anamika Sabu";
    student1.school = "GHSS Chandiroor";
    student1.college = "Jain University";
    student1.course = "BCA Full Stack & AI Development";

    student1.showDetails();

    return 0;
}