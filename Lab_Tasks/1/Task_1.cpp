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

    if (ch=='+')
    {
        cout<<a<<" + "<<b<<" = "<<a+b<<endl;
    }
    else if (ch=='-')
    {
       cout<<a<<" - "<<b<<" = "<<a-b<<endl;
    }
    else if (ch=='*')
    {
       cout<<a<<" * "<<b<<" = "<<a*b<<endl;
    }
    else if (ch=='/')
    {
       cout<<a<<" / "<<b<<" = "<<a/b<<endl;
    }
    else
    {
        cout<<"Please select the proper operator from the menu."<<endl;
    }
    return 0;    
}









