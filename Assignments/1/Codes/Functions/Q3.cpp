#include<iostream>

using namespace std;

void addition(float a,float b);
void subtraction(float a,float b);
void multiplication(float a,float b);
void division(float a,float b);
void remainder(int a,int b);

int main()
{
    float a,b;
    char ch;
    char choice;
    do
    {
        cout<<"Enter first number: ";
        cin>>a;
        cout<<"Enter second nubmer: ";
        cin>>b;
        cout<<"What operation you want to perform?"<<endl;
        cout<<"For Addition press +"<<endl;
        cout<<"For Subtraction press -"<<endl;
        cout<<"For Multiplication press *"<<endl;
        cout<<"For Division press /"<<endl;
        cout<<"For Remainder press %"<<endl;
        cin>>ch;

        switch (ch)
        {
        case '+':
            addition(a,b);
            break;
        case '-':
            subtraction(a,b);
            break;
        case '*':
            multiplication(a,b);
            break;
        case '/':
            division(a,b);
            break;
        case '%':
            remainder(a,b);
            break;    
        default:
            cout<<"Please enter the correct character."<<endl;
            break;
        }
        cout<<"Do you want to do another calculation?(y/n)"<<endl;
        cin>>choice;
    }
    while(choice != 'n');
}

void addition(float a,float b)
{
    cout<<"The addition of "<<a<<" and "<<b<<" is "<<a+b<<endl;
}

void subtraction(float a,float b)
{
    cout<<"The subtraction of "<<a<<" and "<<b<<" is "<<a-b<<endl;
}

void multiplication(float a,float b)
{
    cout<<"The multiplication of "<<a<<" and "<<b<<" is "<<a*b<<endl;
}

void division(float a,float b)
{
    cout<<"The division of "<<a<<" and "<<b<<" is "<<a/b<<endl;
}

void remainder(int a,int b)
{
    cout<<"The remainder of "<<a<<" and "<<b<<" is "<<a%b<<endl;
}










