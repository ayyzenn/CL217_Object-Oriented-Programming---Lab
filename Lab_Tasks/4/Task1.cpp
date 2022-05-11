#include<iostream>

using namespace std;

int printType(double x);
int printType(int x);
int printType(bool x);
int printType(char x);

int main()
{
    printType(false);
    return 0;
}

int printType(double x)
{
    cout<<x<<" is double data type."<<endl;
}
int printType(int x)
{
    cout<<x<<" is an integer data type."<<endl;
}
int printType(bool x)
{
    cout<<x<<" is boolean data type."<<endl;
}
int printType(char x)
{
    cout<<x<<" is a character data type."<<endl;
}