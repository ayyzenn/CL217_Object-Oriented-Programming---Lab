//Early binding , compile time polymorphision

#include<iostream>
using namespace std;

class A
{
    public:
    void print()
    {
        cout<<"A"<<endl;
    }
};

class B: public A
{
    public:
    void print()
    {
        A::print();
        cout<<"B"<<endl;
    }
};

int main()
{
    B objB;

    A *p = &objB;           // accessing the parent class ftn through pointer

    p->print();
    return 0;

}