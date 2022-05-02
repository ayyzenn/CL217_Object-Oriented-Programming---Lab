#include<iostream>                      //including header file
using namespace std;

class employee                          //creating a class of name employee.
{
    private:                             //  Private members
    string empname;
    int empnumber;

    public:                             // Public Methods
    void getData()
    {
        cout<<"Enter the Employee Name: ";
        cin>>empname;
        cout<<"Enter the Employee Number: ";
        cin>>empnumber;
    }
    void putData()
    {
        cout<<"Employee Name: "<<empname<<endl;
        cout<<"Employee Number: "<<empnumber<<endl;
    }
};

class manager : public employee         //derive class which inherite employee class
{
    private:

    char title[20];
    double club_dues;

    public:
    void getData()
    {
        employee::getData();
        cout<<"Title: ";
        cin>>title;
        cout<<"Club dues: ";
        cin>>club_dues;
    }
    void putData()
    {
        employee::putData();
        cout<<"Title: "<<title<<endl;
        cout<<"Club dues: "<<club_dues<<endl;
    }


};
class scientist : public employee               //derive class which inherite employee class
{   
    private:
    int publication;

    public:
    void getData()
    {
        employee::getData();
        cout<<"Publication: ";
        cin>>publication;
    }
    void putData()
    {
        employee::putData();
        cout<<"Publication: "<<publication<<endl;
    }


};
class programmer : public employee              //derive class which inherite employee class
{
    private:
    double salary;
    string expertise;

    public:
    void getData()
    {
        employee::getData();
        cout<<"Salary: ";
        cin>>salary;
        cout<<"Expertise: ";
        cin>>expertise;
    }
    void putData()
    {
        employee::putData();
        cout<<"Salary: "<<salary<<endl;
        cout<<"Expertise: "<<expertise<<endl;
    }
};

int main()
{
    employee e1;                //creatin the object
    e1.getData();
    e1.putData();
cout<<"---------------------------------------------------"<<endl;
    manager m1;                 //creatin the object
    m1.getData();
    m1.putData();
cout<<"---------------------------------------------------"<<endl;
    scientist s1;               //creatin the object
    s1.getData();
    s1.putData();
cout<<"---------------------------------------------------"<<endl;
    programmer p1;              //creatin the object
    p1.getData();
    p1.putData();
cout<<"---------------------------------------------------"<<endl;
    return 0;
}