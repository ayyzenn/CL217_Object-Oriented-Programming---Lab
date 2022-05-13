#include<iostream>
using namespace std;
void mass(float g);

int main()
{
    float m;
    cout<<"Enter the amount in Kilograms: ";
    cin>>m;
    float *p = &m;
    mass(*p);
}

void mass(float g)
{
    float kg;
    kg= g*1000;
    cout<<"Entered amount in grams: "<<kg<<"g"<<endl;
}










