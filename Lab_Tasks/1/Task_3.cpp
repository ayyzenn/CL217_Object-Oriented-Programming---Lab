#include<iostream>

using namespace std;

int main()
{
    char ch;

    cout<<"Select the grade from thre following list"<<endl;
    cout<<"Grade A."<<endl;
    cout<<"Grade B."<<endl;
    cout<<"Grade C."<<endl;
    cout<<"Grade D."<<endl;
    cout<<"Grade F."<<endl;

    cout<<"Enter your grade: ";
    cin>>ch;

    switch (ch)

    {
    case 'A':
        cout<<"Excellent"<<endl;
        break;
    case 'B':
        cout<<"Very Good"<<endl;
        break;
    case 'C':
        cout<<"Good"<<endl;
        break;
    case 'D':
        cout<<"Poor"<<endl;
        break;
    case 'F':
        cout<<"Fail"<<endl;
        break;
    default:
        cout<<"Please select the proper grade from the list."<<endl;
        break;
    }
    return 0;    
}





