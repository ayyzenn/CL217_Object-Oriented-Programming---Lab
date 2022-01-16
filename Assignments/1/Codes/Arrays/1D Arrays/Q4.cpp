#include<iostream>
using namespace std;
int main()
{
    int arr[5];

    for(int i =0 ; i<5; i++)
    {
        cout<<"array["<<i<<"] = ";
        cin>>arr[i];
    }
    cout<<endl;

    int max=arr[0];

    for(int j =0 ; j<5; j++)
    {
        if (arr[j]>max)
        {
            max=arr[j];
        }
    }
    cout<<endl;
    cout<<"Maximum Number is = "<<max<<endl;
}
