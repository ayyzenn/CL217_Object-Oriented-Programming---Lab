#include<iostream>
using namespace std;
int main()
{
    int n , i=1;
    cout<<"Enter the number: ";
    cin>>n;
    do
    {
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
        i++;
    }
    while (i<=10);
}
