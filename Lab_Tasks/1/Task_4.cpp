#include<iostream>
using namespace std;
int main()
{
    char ch;

    cout<<"Select the grade from thre following list"<<endl;
    cout<<"Grade A or a."<<endl;
    cout<<"Grade B or b."<<endl;
    cout<<"Grade C or c."<<endl;
    cout<<"Grade D or d."<<endl;
    cout<<"Grade F or f."<<endl;

    cout<<"Enter your grade: ";
    cin>>ch;

    switch (ch)

    {
    case 'A':
        cout<<"Excellent"<<endl;
        break;
    case 'a':
        cout<<"Excellent"<<endl;
        break;
    case 'B':
        cout<<"Very Good"<<endl;
        break;
    case 'b':
        cout<<"Very Good"<<endl;
        break;
    case 'C':
        cout<<"Good"<<endl;
        break;
    case 'c':
        cout<<"Good"<<endl;
        break;
    case 'D':
        cout<<"Poor"<<endl;
        break;
    case 'd':
        cout<<"Poor"<<endl;
        break;
    case 'F':
        cout<<"Fail"<<endl;
        break;
    case 'f':
        cout<<"Fail"<<endl;
        break;
    default:
        cout<<"Please select the proper grade from the list."<<endl;
        break;
    }
    return 0;    
}




















