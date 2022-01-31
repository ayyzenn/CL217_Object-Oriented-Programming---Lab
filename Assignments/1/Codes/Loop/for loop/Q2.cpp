#include<iostream>
using namespace std;
int main()
{
    cout<<"Even numbers"<<endl;
    for (int i = 1; i <= 10; i++)
    {
        if (i%2==0)
        {
            cout<<i<<endl;
        }
        
    }
    cout<<endl;
    cout<<"Odd numbers"<<endl;
    for (int j = 1; j <= 10; j++)
    {
        if (j%2 != 0)
        {
            cout<<j<<endl;
        }
        
    }
       
}