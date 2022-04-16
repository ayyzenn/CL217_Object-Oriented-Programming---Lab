#include <iostream>
using namespace std;
class Employee {
   public:
       int id; //data member (also instance variable)    
       string name; //data member(also instance variable)
       float salary;

       //parameterized constructor
       Employee(int i, string n, float s)  
        {  
            id = i;  
            name = n;  
            salary = s;
        }  // end of constructor body
       void display()  
        {  
            cout<<id<<"  "<<name<<"  "<<salary<<endl;  
        }  
        // Employee(Employee &e)
        // {
        //     id = e.id;  
        //     name = e.name;  
        //     salary = e.salary;
        // }
};  // end of class body

int main(void) {
    Employee e1 =  Employee(101, "Ali", 890000);  //creating an object of Employee 
    Employee e2 = Employee(102, "Saad", 59000); 
    
    e1.display();  
    e2.display();  

    //Employee e3=e1;
    Employee e3(e1);
    return 0;
}