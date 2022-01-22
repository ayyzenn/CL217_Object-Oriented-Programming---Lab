#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    if (x>0)
    {
        cout<<x<<" is a positive number."<<endl;
    }
    else if (x<0)
    {
        cout<<x<<" is a negative number."<<endl;
    }
    
    else
    {
        cout<<x<<" is a neutral number."<<endl;
    }
}