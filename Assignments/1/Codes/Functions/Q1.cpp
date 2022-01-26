#include<iostream>
using namespace std;
void table(int num);
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    table(n);
    return 0;
       
}

void table(int num)
{
    for (int i = 1; i <= 10; i++)
    {
        cout<<num<<" * "<<i<<" = "<<num*i<<endl;
    }

}