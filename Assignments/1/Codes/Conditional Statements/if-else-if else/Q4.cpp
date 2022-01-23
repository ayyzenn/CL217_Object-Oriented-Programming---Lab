#include<iostream>
using namespace std;
int main()
{
    float a,b;
    char ch;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second nubmer: ";
    cin>>b;
    cout<<"What operation you want to perform?"<<endl;
    cout<<"For Addition press +"<<endl;
    cout<<"For Subtraction press -"<<endl;
    cout<<"For Multiplication press *"<<endl;
    cout<<"For Division press /"<<endl;
    cin>>ch;
    if (ch == '+')
    {
        cout<<"The addition of "<<a<<" and "<<b<<" is "<<a+b<<endl;
    }
    else if (ch == '-')
    {
        cout<<"The subtraction of "<<a<<" and "<<b<<" is "<<a-b<<endl;
    }
    else if (ch == '*')
    {
        cout<<"The multiplication of "<<a<<" and "<<b<<" is "<<a*b<<endl;
    }
    else if (ch == '/')
    {
        cout<<"The division of "<<a<<" and "<<b<<" is "<<a/b<<endl;
    }
    else
    {
        cout<<"Please enter the correct character."<<endl;
    }
}






