#include<iostream>

using namespace std;

int main()

{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int result = (num%2==0) ? true : false ;
    if (result == true)
    {
        cout<<"It is a even number."<<endl;
    }
    else
    {
        cout<<"it is a odd number."<<endl;
    }

    return 0;
}