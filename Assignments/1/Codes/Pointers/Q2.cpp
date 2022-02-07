#include<iostream>
using namespace std;
void convertion(float c);

int main()
{
    float temp;
    cout<<"Enter the Temperature in Fahrenheit: ";
    cin>>temp;
    float *p = &temp;
    convertion( *p );
}

void convertion(float f)
{
    float c;
    c = (f-32) * 5.0/9.0 ;
    cout<<"Temperature in Celsius is: "<<c<<endl;
}