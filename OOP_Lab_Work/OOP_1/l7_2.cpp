#include<iostream>
using namespace std;
int main()
{
    string firstName,lastName;
    cin>>firstName;
    cin>>lastName;
    string fullName =firstName.append(lastName);
    cout<<fullName;
}