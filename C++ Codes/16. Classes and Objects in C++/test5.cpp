
/*  If the object is declared in the definition of a member function
 of the class, then the object can access both the public and private 
 members. */
#include <iostream>
using namespace std;

class Student
{
    int id;
    string name;
    void setData(int, string);
    void showData()
    {
        cout<<"Id is : "<<id<<" Name is: "<<name<<endl;
    }
    public:
    void initiliazeObject();
};

// main function
int main() {

     Student s2;
     s2.initiliazeObject();
	
	return 0;
}  // end of main() function

void Student :: setData(int id, string name)
    {
        this->id=id;
        this->name=name;
    }

void Student :: initiliazeObject()
{
    Student s1;
    s1.setData(111, "Ali");
    s1.showData();

    cout<<s1.id;
}