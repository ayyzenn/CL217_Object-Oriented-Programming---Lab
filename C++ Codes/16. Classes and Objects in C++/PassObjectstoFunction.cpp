using namespace std;
#include<iostream>
class Test
{
    private:
    char name[20];
    public:
    void get()
    {
        cout<<"Enter your name: ";
        cin.get(name, 20);      
    }
    
    void print(Test s1)
    {
        cout<<"Name is: "<<s1.name<<endl;
    }
  
}; // end of class body
 
int main () {

    Test test1,test2;
    test1.get(); // calling get() function for object initialization

    test2.print(test1);  //Passing object as argument to function
   return 0;
}
