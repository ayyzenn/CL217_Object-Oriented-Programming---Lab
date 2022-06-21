#include<iostream>
using namespace std;
int main()
{
    int cp,sp,profit;
    cout<<"Enter the Cost Price: ";
    cin>>cp;
    cout<<"Enter the Selling Price: ";
    cin>>sp;
    profit=sp-cp;
    if (profit>0)
    {
        cout<<"You get Profit"<<endl;
    }
    else
    {
        cout<<"You get Incurred loss"<<endl;
    }
    

}