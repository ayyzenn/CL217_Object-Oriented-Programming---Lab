//Write a program by using class to input values using a member functions of a class. \
//Display the sum of two values by using another member function of the class.

#include <iostream>
using namespace std;

class Sum
{
   // Access specifier
    private:
   //Data members
   int n , m;

   public:
   void getDate(int x, int y)
    {
       n=x;
       m=y;
    }

    void displayData()
    {
        cout<<"Sum is: "<<(n+m);
    }
}; // end of class body
 
int main () {

    // Declare an object of class
    Sum sum;

    int x, y;
    cout<<"Enter first No. :"; cin>>x;
    cout<<"Enter second No. :"; cin>>y;

    // accessing member function
    sum.getDate(x,y);
    sum.displayData();
   return 0;
}
