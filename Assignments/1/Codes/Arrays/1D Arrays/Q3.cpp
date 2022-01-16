#include<iostream>
#include<cctype>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    int ran;
    int sum=0;
    int arr_1[5];
    int arr_2[5];
    srand(time(0));
    for(int i =0 ; i<5; i++)
    {
        ran = rand();
        ran = ran % 99 + 1;
        arr_1[i] = ran;
    }
    cout<<endl;
    for(int j =0 ; j<5; j++)
    {
        ran = rand();
        ran = ran % 99 + 1;
        arr_2[j] = ran;
    }
    for(int a =0 ; a<5; a++)
    {
        cout<<"array_1["<<a<<"] = "<<arr_1[a]<<endl;
    }
    cout<<endl;
    for(int b =0 ; b<5; b++)
    {
        cout<<"array_2["<<b<<"] = "<<arr_2[b]<<endl;
    }
    for(int k =0 ; k<5; k++)
    {
        sum= arr_1[k]+arr_2[k];
        cout<<"Sum of element "<<arr_1[k]<<" and "<<arr_2[k]<<" is: "<<sum<<endl;
    }
    cout<<endl;
}
