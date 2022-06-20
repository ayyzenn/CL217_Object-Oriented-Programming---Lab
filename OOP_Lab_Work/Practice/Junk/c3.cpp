#include<iostream>
using namespace std;
int main()
{
    float total_expenses, price; 
    int quantity,discount;
    cout<<"Enter the Quantity of the items: ";
    cin>>quantity;
    cout<<"Enter the Price of the items: ";
    cin>>price;
    total_expenses=quantity*price;
    if (total_expenses>5000)
    {
        discount=total_expenses*0.1;
        total_expenses=total_expenses-discount;
        cout<<"Your total expence is Rs. "<<total_expenses<<" and the discount is Rs. "<<discount<<endl;
    }
    else
    {
        cout<<"Your total expence is Rs. "<<total_expenses<<endl;
    }
}