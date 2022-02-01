#include<iostream>

using namespace std;


int main()
{
    int i,j,n;
    n=5;
    for (i = 1; i <=5; i++)    //repetition of columns (i)
    {
        j=1;
        while (j<=n)           //repetition of rows (j)
        {
            cout<<j;
            j++;   
        }
        cout<<endl;
        --n;
    }
}
