#include<iostream>
using namespace std;
int main()
{
    int array[3][3];
    array[0][0]=70;
    array[0][1]=80;
    array[0][2]=90;
    array[1][0]=10;
    array[1][1]=70;
    array[1][2]=30;
    array[2][0]=95;
    array[2][1]=77;
    array[2][2]=76;

    cout<<"-----------------------------------------------------------"<<endl;
    cout<<"1st Method of Arrary Initilization"<<endl;

    for (int r = 0; r < 3; r++)
    {
         for (int c = 0; c < 3; c++)
         {
             cout<<array[r][c]<<" ";
         }
         cout<<endl;
    }
    cout<<"***********************************************************"<<endl;

    int marks[3][3]={  {30,40,50} , {70,80,10} , {12,45,67}  };

    cout<<"2nd Method of Arrary Initilization"<<endl;

    for (int r = 0; r < 3; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            cout<<marks[r][c]<<" ";
        }
        cout<<endl;
    }
    cout<<"-----------------------------------------------------------"<<endl;
    return 0;
}