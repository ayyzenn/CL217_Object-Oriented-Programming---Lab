#include<iostream>

using namespace std;

int main()

{
    int num_1,num_2;
    cout<<"Enter first number: ";
    cin>>num_1;
    cout<<"Enter second number: ";
    cin>>num_2;
    int result = (num_1>num_2) ? num_1 : num_2;
    cout<<result<<" is largest number."<<endl;;
    return 0;
}