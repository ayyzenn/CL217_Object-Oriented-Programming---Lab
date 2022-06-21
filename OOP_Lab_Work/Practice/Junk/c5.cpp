#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the age of Saad: ";
    cin>>a;
    cout<<"Enter the age of Osaid: ";
    cin>>b;
    cout<<"Enter the age of Waqas: ";
    cin>>c;
    if (a<b && a<c)
    {
        cout<<"Saad is the Youngest."<<endl;
    }
    else if (b<a && b<c)
    {
        cout<<"Osaid is the Youngest."<<endl;
    }
    else
    {
        cout<<"Waqas is the Youngest."<<endl;
    }
    return 0;
}