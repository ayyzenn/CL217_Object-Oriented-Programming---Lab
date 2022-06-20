#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    if (x>=0)
    {
        cout<<"The absolute value of a number entered by the user is "<<x<<endl;
    }
    else
    {
        cout<<"The absolute value of a number entered by the user is "<<-(x)<<endl;
    }
}