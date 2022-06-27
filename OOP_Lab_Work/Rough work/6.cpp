#include<iostream>
using namespace std;

int main()
{
    int a=10;
    cout<<"Value "<<a<<endl;
    cout<<"Address "<<&a<<endl;
    int *ref=&a;
    //int **p=&ref;
    void *p=&ref;
    void *s=&p;
    cout<<"Value through pointer ref: "<<*ref<<endl;
    cout<<"Address of the pointer ref: "<<p<<endl;
    cout<<"Address of the pointer p: "<<s<<endl;
}