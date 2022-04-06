using namespace std;
#include<iostream>

class Date
{
   // Access specifier
    public:
    int year;
    int month;
    int day;

    public:
    void getDate()
    {
        cout<<"Enter year, month and day respectively:";
        cin>>year>>month>>day;
    }
    void displayDate()
    {
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }
   
}; // end of class body


int main () {

    // Declare an object of class 
    Date date,date1,date3;
    Date d1,d2,d3;

    // date.year=1999;
    // date.month=02;
    // date.day= 8;
    
    // cout<<date.day<<"/"<<date.month<<"/"<<date.year;

    date.getDate();
    date.displayDate();

    date1.getDate();
    date1.displayDate();
   
   return 0;
}