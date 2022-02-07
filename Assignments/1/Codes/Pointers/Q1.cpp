#include<iostream>
using namespace std;
void max_min(int a[],int size);

int main()
{
    int size_of_array;
    int a[100];
    cout<<"Entet the size of the array: ";
    cin>>size_of_array;
    max_min(a,size_of_array);
}
void max_min(int a[],int size)
{
    int *p;

    for(int i=0; i<size;i++)
    {
        cout << "a["<< i<<"] = ";
        cin>>a[i];
    }
    int max=a[0], min=a[0];
    for (int i = 0; i < size; i++)
    {
        p=&a[i];
        if ( *p > max)
        {
            max=*p;
        }
        if ( *p < min)
        {
            min=*p;
        }
    }
    cout<<"Max value: "<<max<<endl;
    cout<<"Min value: "<<min<<endl;
}








