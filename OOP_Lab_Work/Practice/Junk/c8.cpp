#include<iostream>
using namespace std;
int main()
{
    int call,bill,t_bill;
    cout<<"Enter the amount of calls you made: ";
    cin>>call;
    bill=200;
    if (call<=100)
    {
        cout<<"Your bill is: "<<bill<<endl;
    }
    else if (call<=150)
    {
        call=150-call;
        t_bill=call*0.60;
        cout<<"Your total bill is "<<t_bill<<endl;
    }
    else if (call<=200)
    {
        call=200-call;
        t_bill=call*0.50;
        cout<<"Your total bill is "<<t_bill<<endl;
    }
    else
    {
        t_bill=call*0.40;
        cout<<"Your total bill is "<<t_bill<<endl;
    }   
}