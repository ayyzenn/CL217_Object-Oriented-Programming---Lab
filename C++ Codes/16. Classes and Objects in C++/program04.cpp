#include <iostream>
using namespace std;

class EmployeeRecord
{
   private:
    char name[15];
    float bpay, h_rent, ma, gpay;
    
    public:
    void getRecord()
    {
       cout<<"Enter Name of the employee: "; cin>>name;
       cout<<"Enter basic pay of employee: "; cin>>bpay;
    }
    void allow()
    {
       h_rent =bpay*60/100;
       ma= bpay*20/100;
       gpay=bpay+h_rent+ma;
    }
    void displayRecord()
    {
       cout<<"Name of the Employee : "<<name<<endl;
       cout<<"Basic Pay            : "<<bpay<<endl;
       cout<<"House Rent           : "<<h_rent<<endl;
       cout<<"Medical Allowance    : "<<ma<<endl;
       cout<<"Net Pay              : "<<gpay<<endl;

    }

}; // end of class body
 
int main () {

    // Declare an object of class
    EmployeeRecord empRecord;

    // accessing member function
    empRecord.getRecord();
    empRecord.allow();
    empRecord.displayRecord();
    return 0;
}
