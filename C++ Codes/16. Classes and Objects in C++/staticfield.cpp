#include <iostream>  
using namespace std;  
class Account {  
   public:  
       int accno; //data member (also instance variable)      
       string name; //data member(also instance variable) 
       string university; // 2kb

       static float rateOfInterest;   

       Account(int accno, string name)   
        {    
            this->accno = accno;    
            this->name = name;  
        }    
       void display()    
        {    

            cout<<accno<< " "<<name<< " "<<rateOfInterest<<endl;
        }  
};

// Initialize static member of class Account  
float Account::rateOfInterest=3.5;  

int main(void) {

    Account a1 =Account(201, "Kashif"); //creating an object of Employee   
    Account a2=Account(202, "Amir"); //creating an object of Employee  
    a1.display();    
    a2.display(); 

    

    return 0;  
}