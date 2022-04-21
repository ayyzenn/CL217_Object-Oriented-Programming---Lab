#include <iostream>
using namespace std;

class Student {
   public:
    double marks1, marks2;
}; //class body ends

// function that returns object of Student
Student createStudent() {
    Student student;

    // Initialize member variables of Student
    student.marks1 = 96.5;
    student.marks2 = 75.0;

    return student;
}

int main() {
    Student student1;

    // Call function
    student1 = createStudent();

    // print member variables of Student
    cout << "Marks 1 = " << student1.marks1 << endl;
    cout << "Marks 2 = " << student1.marks2 << endl;


    return 0;
}