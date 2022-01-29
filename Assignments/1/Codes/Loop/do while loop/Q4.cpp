#include<iostream>
using namespace std;
int main()
{
    int n, fac=1,i=1;
    cout<<"Enter a number: ";
    cin>>n;

    do
    {
        fac*=i;
        i++;
    }
    while (i<=n);
    cout<<fac<<endl;
    return 0;
}