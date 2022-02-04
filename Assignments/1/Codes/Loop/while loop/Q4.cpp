#include<iostream>
using namespace std;
int main()
{
    int n, fac=1,i=1;
    cout<<"Enter a number: ";
    cin>>n;
    while (i<=n)
    {
        fac*=i;
        i++;
    }
    cout<<fac<<endl;
    return 0;
}