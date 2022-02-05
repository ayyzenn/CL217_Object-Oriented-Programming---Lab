#include<iostream>
using namespace std;
int main()
{
    float centigrade, fahrenheit;
    cout<<"Enter the temperature in Centigrade: ";
    cin>>centigrade;
    fahrenheit = (9.0 / 5.0 * centigrade) + 32; 
    cout<<"Temperatur in Fahrenheit is: "<<fahrenheit<<endl;
    return 0;
}