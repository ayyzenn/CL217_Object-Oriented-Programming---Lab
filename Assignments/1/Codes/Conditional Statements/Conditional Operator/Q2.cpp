#include<iostream>

using namespace std;

int main()

{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int result = (num>0) ? true : false ;
    if (result == true)
    {
        cout<<"It is a positive number."<<endl;
    }
    else
    {
        cout<<"it is a negative number."<<endl;
    }

    return 0;
}