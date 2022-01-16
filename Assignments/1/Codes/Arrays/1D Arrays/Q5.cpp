#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int arr[5];

    for(i =0 ; i<5; i++)
    {
        cout<<"array["<<i<<"] = ";
        cin>>arr[i];
    }
    cout<<endl;

    int min=arr[0];

    for(j =0 ; j<5; j++)
    {
        if (arr[j]<min)
        {
            min=arr[j];
        }
    }
    cout<<endl;
    cout<<"Minimum Number is = "<<min<<endl;
}
