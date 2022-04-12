using namespace std;
#include<iostream>

class Prog
{
    public:
    Prog()
    {
        cout<<"This is constructor function "<<endl;
    }

    ~Prog()
    {
        cout<<"This is destructor function "<<endl;
    }
  
}; // end of class body
 
int main () {
    Prog x;
    int a, b;
    a=10;
    b=20;
    cout<<"Sum of two numbers is = "<<(a+b)<<endl;
    return 0;
}
