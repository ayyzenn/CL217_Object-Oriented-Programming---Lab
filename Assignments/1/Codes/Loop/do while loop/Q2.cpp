#include<iostream>
using namespace std;
int main()
{
    int i=0, j=0;
    cout<<"Even numbers"<<endl;

    do
    {
       if (i%2==0)
        {
            cout<<i<<endl;
        }
        i++;
    } 
    while (i<=10);
    
    cout<<endl;
    cout<<"Odd numbers"<<endl;
    do
    {
        if (j%2 != 0)
        {
            cout<<j<<endl;
        }
        j++;
    } 
    while (j<=10);
    
}