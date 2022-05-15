#include<iostream>
using namespace std;

struct employee
{
    int employee_number;
    float employee_compensation;
};


int main()
{
    employee e1,e2,e3;
    cout<<"Enter Number for Employee #1 "<<endl;
    cin>>e1.employee_number;
    cout<<"Enter Compensation in dollars for Employee #1 "<<endl;
    cin>>e1.employee_compensation;
    cout<<"Enter Number for Employee #2 "<<endl;
    cin>>e2.employee_number;
    cout<<"Enter Compensation in dollars for Employee #2 "<<endl;
    cin>>e2.employee_compensation;
    cout<<"Enter Number for Employee #3 "<<endl;
    cin>>e3.employee_number;
    cout<<"Enter Compensation in dollars for Employee #3 "<<endl;
    cin>>e3.employee_compensation;

    cout<<"------------------------------------------------"<<endl;
    cout<<"First Employee's number is: "<<e1.employee_number<<"\n";
    cout<<"And its Compensation is: "<<e1.employee_compensation<<endl;
    cout<<"------------------------------------------------"<<endl;
    cout<<"Second Employee's number is: "<<e2.employee_number<<"\n";
    cout<<"And its Compensation is: "<<e2.employee_compensation<<endl;
    cout<<"------------------------------------------------"<<endl;
    cout<<"Third Employee's number is: "<<e3.employee_number<<"\n";
    cout<<"And its Compensation is: "<<e3.employee_compensation<<endl;
    cout<<"------------------------------------------------"<<endl;
}