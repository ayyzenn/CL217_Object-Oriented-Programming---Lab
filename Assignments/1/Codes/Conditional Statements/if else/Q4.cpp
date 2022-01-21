#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter the first number: ";
    cin>>n1;
    cout<<"Enter the second number: ";
    cin>>n2;
    if (n1>n2)
    {
        cout<<n1<<" largest than "<<n2<<endl;
    }
    else
    {
        cout<<n1<<" smallest than "<<n2<<endl;
    }
}
