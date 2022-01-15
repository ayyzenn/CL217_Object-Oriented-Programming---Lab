#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int arr_1[5];
    int arr_2[5];

    for(int i =0 ; i<5; i++)
    {
        cout<<"array_1["<<i<<"] = ";
        cin>>arr_1[i];
    }
    cout<<endl;

    for(int j =0 ; j<5; j++)
    {
        cout<<"array_2["<<j<<"] = ";
        cin>>arr_2[j];
    }

    for(int k =0 ; k<5; k++)
    {
        sum= arr_1[k]+arr_2[k];
        cout<<sum<<"\t";
    }
    cout<<endl;

}
