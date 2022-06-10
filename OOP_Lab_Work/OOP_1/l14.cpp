#include<iostream>
using namespace std;
int array_size;

void array(int test[])
{
    for (int  i = 0; i < array_size; i++)
    {
        cout<<"Enter value of test["<<i<<"]= ";
        cin>>test[i];
    }
    for (int i = 0; i < array_size; i++)
    {
        cout<<"Num["<<i<<"]= "<<test[i]<<endl;
    }
    
}
int main()
{
    cout<<"Enter Arrary Size: ";
    cin>>array_size;
    int num[array_size];
    array(num);
}