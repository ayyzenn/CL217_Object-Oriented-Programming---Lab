#include <iostream>
using namespace std;

class Temp
{
   private:
    int x;
    float y;
    
    public:
     void getData(void)
     {
        cout<<"Enter value of x : "; cin>>x;
        cout<<"Enter value of y : "; cin>>y;
     }

      void print(void)
     {
        cout<<"Entered value of x = "<<x<<endl;
        cout<<"Entered value of y = "<<y<<endl;
     }
}; // end of class body
 
int main () {

    // Declare an object of class
    Temp a, b;

    
    a.getData();

    cout<<"Get data in object a"<<endl;
    a.getData();

    cout<<"Get data in object b"<<endl;
    b.getData();

    cout<<"Data in object a is : "<<endl;
    a.print();

    cout<<"Data in object b is : "<<endl;
    b.print();

    return 0;
}