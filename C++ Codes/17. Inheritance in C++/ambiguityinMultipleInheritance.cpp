#include <iostream>
using namespace std;

class base1 {
  public:
      void someFunction( ) 
      {
          cout<<"Function of base1";
      }  
};  // end of base1 class
class base2 {
    public:
    void someFunction( ) 
    {
        cout<<"Function of base1";
    } 
}; // end of base2 class

class derived : public base1, public base2 {
    // code of derived class
};

int main() {
    derived obj;
    //obj.someFunction() // Error!  

    obj.base1::someFunction( );  // Function of base1 class is called
    obj.base2::someFunction();   // Function of base2 class is called.
}

