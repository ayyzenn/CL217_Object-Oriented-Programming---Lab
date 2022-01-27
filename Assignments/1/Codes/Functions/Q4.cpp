#include<iostream>

using namespace std;

int *arrayFunction()
{
    static int  a[5];
    cout<<"Enter the Elements "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "a["<<i<<"]"<<" : ";
        cin>>a[i];
    }
    return a;    
}

int main()
{
    int *p;
    p = arrayFunction();
    cout<<endl<<"--------------------------------"<<endl;
    for ( int i = 0; i < 5; i++ ) 
    {
      cout << "a["<<i<<"]"<<" : ";
      cout << *(p + i) << endl;
    }
    return 0;
}