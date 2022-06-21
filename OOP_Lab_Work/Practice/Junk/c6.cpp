#include<iostream>
using namespace std;
int main()
{
    float a,b,c,tri;
    cout<<"Enter the First angle: ";
    cin>>a;
    cout<<"Enter the Second angle: ";
    cin>>b;
    cout<<"Enter the Third angle: ";
    cin>>c;
    tri=a+b+c;
    if (tri==180)
    {
        cout<<"It is a valid triangle."<<endl;
    }
    else
    {
        cout<<"It is not a valid triangle."<<endl;
    }
    
}