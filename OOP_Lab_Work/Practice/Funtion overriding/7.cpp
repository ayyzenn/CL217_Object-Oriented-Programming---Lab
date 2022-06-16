#include<iostream>
using namespace std;

class A
{
    public:
    A()
    {
        cout<<"Constructor of Class A!"<<endl;
    }

};

class B : public A
{
    public:
    B()
    {
        cout<<"Constructor of Class B!"<<endl;
    }

};

int main()
{
    B b;

    return 0;
}
