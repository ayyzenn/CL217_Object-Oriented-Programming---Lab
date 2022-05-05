#include<iostream>

using namespace std;

int main()
{
    float a,b;
    char ch;

    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;

    cout<<"Which operation you want to perform?"<<endl;
    cout<<"Press + for Addition."<<endl;
    cout<<"Press - for Subtraction."<<endl;
    cout<<"Press * for Multipication."<<endl;
    cout<<"Press / for Division."<<endl;

    cin>>ch;
    switch (ch)
    {
    case '+':
        cout<<a<<" + "<<b<<" = "<<a+b<<endl;
        break;
    case '-':
        cout<<a<<" - "<<b<<" = "<<a-b<<endl;
        break;
    case '*':
        cout<<a<<" * "<<b<<" = "<<a*b<<endl;
        break;
    case '/':
        cout<<a<<" / "<<b<<" = "<<a/b<<endl;
        break;
    
    default:
        cout<<"Please select the proper operator from the menu."<<endl;
        break;
    }
    return 0;    
}










