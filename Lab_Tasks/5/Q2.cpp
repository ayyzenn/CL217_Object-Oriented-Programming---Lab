#include<iostream>
using namespace std;
void convertion(float c);

int main()
{
    float temp;
    cout<<"Enter the Temperature in Celsius: ";
    cin>>temp;
    float *p = &temp;
    convertion( *p );
}

void convertion(float c)
{
    float f;
    f = ((9.0/5.0)* c) + 32;
    cout<<"Temperature in Fahrenheit is: "<<f<<endl;
}


