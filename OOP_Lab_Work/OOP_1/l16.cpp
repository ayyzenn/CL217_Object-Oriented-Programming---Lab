#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int b=20;
    cout<<"The value of a and b without swap is: "<<a<<" "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    
    cout<<"The value of a and b after swap is:"<<a<<" "<<b<<endl;
}