#include<iostream>
#include<iomanip>
using namespace std;


int main()
{
    int i,j,k,c=5;
    
    for (i = 1; i <=5; i++)    //repetition of columns (i)
    {
       for (k = 1; k <=c; k++)
       {
           cout<<" ";
       }
        for ( j = 1; j <= i; j++)
        {
            cout<<setw(2)<<"*";
        }
        cout<<endl;
        c--;
    }
}
