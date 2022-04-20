#include <iostream>
using namespace std;

class EmployeeRecord
{
   private:
    char name[15];
    float bpay, h_rent, ma, gpay;
    
    public:
      void getRecord(void);  //function declaration
      void allow(void);
      void displayRecord(void);

}; // end of class body
 
int main () {

    // Declare an object of class
    EmployeeRecord empRecord,empRecord2;
    //EmployeeRecord empRecord=EmployeeRecord(); 

    // accessing member function
    empRecord.getRecord();
    empRecord.allow();
    empRecord.displayRecord();
    return 0;
}  // end of main() function


// Definition of getRecord() using scope resolution operator ::
   void EmployeeRecord::getRecord()
    {
       cout<<"Enter Name of the employee: "; cin>>name;
       cout<<"Enter basic pay of employee: "; cin>>bpay;
    }
   
    // Definition of allow using scope resolution operator ::
   void EmployeeRecord::allow()
    {
       h_rent =bpay*60/100;
       ma= bpay*20/100;
       gpay=bpay+h_rent+ma;
    }
    // Definition of displayRecord using scope resolution operator ::
    void EmployeeRecord::displayRecord()
    {
       cout<<"Name of the Employee : "<<name<<endl;
       cout<<"Basic Pay            : "<<bpay<<endl;
       cout<<"House Rent           : "<<h_rent<<endl;
       cout<<"Medical Allowance    : "<<ma<<endl;
       cout<<"Net Pay              : "<<gpay<<endl;
    }



