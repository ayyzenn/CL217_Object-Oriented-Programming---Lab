#include<iostream>
using namespace std;
class A
{
    private:
    int a1, a2;
    protected:
    int pa1, pa2;
    public:
    int b;  
    void ppp(void)
    {
        cout<<"Value of pa1 of class A: "<<pa1<<endl;
        cout<<"Value of pa2 of class A: "<<pa2<<endl;
        //cout<<"Value of b of class A: "<<b<<endl;
    }
   
}; // end of base class A

//derived class 
class B : public A   //publicly-derived class
{
    public:
    void get(void)
    {
        cout<<"Enter value of pa1: "; cin>>pa1;
        cout<<"Enter value of pa2: "; cin>>pa2;
    }
};  // end of derived class B

int main()
{
    B obj;
    //int a= obj.b=100;
    //cout<<"Value of a is: "<<a<<endl;
    obj.get();
    obj.ppp();
} // end of main() function

