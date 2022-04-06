// C++ program to demonstrate accessing of data members
#include <iostream>
using namespace std;

class Student
{
   // Access specifier
    public:
   //Data members
   int id;
   string name;
   double salary;
}; // end of class body
 
int main () {

// Declare an object of class Student
    Student s1;

    // accessing data member
    s1.id=144;
    s1.name="Aisha";
    s1.salary=60000;

    cout<<"Student Id is:"<<s1.id<<endl;
    cout<<"Student Name is:"<<s1.name<<endl;
    cout<<"Student Salary is:"<<s1.salary<<endl; 
   return 0;
}

