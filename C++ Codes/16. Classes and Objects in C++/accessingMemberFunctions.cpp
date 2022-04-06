// C++ program to demonstrate accessing of data members and member functions
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

   // Member Functions()
   void setData(int i, string n, double s)
    {
       id=i;
       name=n;
       salary=s;
    }

    void printData()
    {
        cout<<"Student Id is:"<<id<<endl;
        cout<<"Student Name is:"<<name<<endl;
        cout<<"Student Salary is:"<<salary<<endl; 
    }
}; // end of class body
 
int main () {

    // Declare an object of class Student
    Student s1;

    // accessing member function
    s1.setData(144, "Aisha", 60000.75);

    s1.printData();

   return 0;
}
