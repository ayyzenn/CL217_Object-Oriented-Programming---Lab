// Write a program to input a date and print on the screen using class.
using namespace std;
#include<iostream>

class Date
{
   // Access specifier
    private:
   //Data members
    int y,m,d;
        
   public:
   void getDate()
    {
       cout<<"Enter Year: "; cin>>y;
       cout<<"Enter Month: "; cin>>m;
       cout<<"Enter Day: "; cin>>d;
    }

    void printDate()
    {
        cout<<"Date is :";
        cout<<d<<"/" <<m<<"/"<<y;
    }
}; // end of class body
 
int main () {

    // Declare an object of class Date
    Date date;

    // accessing member function
    date.getDate();
    date.printDate();
   return 0;
}
