#include <iostream>  
using namespace std;  
class Employee  
 {  
   int a;
   string name;

   public:  
        Employee()    
        {    
            cout<<"Default Constructor Invoked/Called"<<endl;    
        }    
}; // end of class body 

int main(void)   
{  

    Employee e1 = Employee(); //creating an object of Employee   
    Employee e2;  
    Employee e3;
    Employee e4;
    Employee e5;
    
    return 0;  
} 


// default constructor
//explicit default
//implicit default constructor