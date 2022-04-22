using namespace std;
#include<iostream>

class Student
{
    private:
    int id;   // data members or instance variables
    string name;

    public:
    void setData(int i, string n);  // function declaration
    void getData();   

}; //end of class

int main () {

    Student s1,s2;

    s1.setData(77,"Ali");
    s2.setData(66,"Alishan");

    s1.getData();
    s2.getData();


   return 0;
}

    void Student :: setData(int i, string n)
    {
        id=i;
        name=n;
    }

    void Student :: getData()
    {
        cout<<"Id is :"<<id<<" Name is :"<<name<<endl;
    }

// object is the result (intance) of class
// object instantiation
// getters() and setters()
// defining functions outside the clas ::




