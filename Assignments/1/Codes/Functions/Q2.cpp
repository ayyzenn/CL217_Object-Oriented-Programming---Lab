#include<iostream>
using namespace std;

int fac(int num);

int main()
{
    int n=0;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<fac(n)<<endl;
    return 0;
       
}

int fac(int num)
{
    int fac=1;
    for (int i = 1; i <= num; i++)
    {
        fac*=i;
    }
    return fac;
}




