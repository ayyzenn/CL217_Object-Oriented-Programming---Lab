#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for ( i = 0; i <=5; i++)
    {
        j=i;
        while (j<=5)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
    }
}