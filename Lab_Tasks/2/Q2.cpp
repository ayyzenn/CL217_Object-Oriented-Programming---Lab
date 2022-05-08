#include<iostream>
using namespace std;
int main()
{
    int array[3][3];

    cout<<"1st Method of Arrary Initilization"<<endl;
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            cout<<"array["<<r<< "]"<<" "<<"["<<c<<"] = ";
            cin>>array[r][c];
        }
        cout<<"---------------------------------"<<endl;
    }
    
    cout<<"Values of Array"<<endl;
    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            cout<<array[r][c]<<" ";
        }
        cout<<endl;
    }
    
}