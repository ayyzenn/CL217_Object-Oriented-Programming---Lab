#include<iostream>
using namespace std;
int main()
{
    float percentage;

    cout << "Enter marks percentage : ";
    cin >> percentage;

    if (percentage >= 90 && percentage <= 100)
    {
        cout << "Your grade is A."<<endl;
    }
    else if (percentage >= 80 && percentage < 90 )
    {
        cout << "Your grade is B."<<endl;
    }
    else if (percentage >= 70 && percentage < 79.99 )
    {
        cout << "Your grade is C."<<endl;
    }
    else if (percentage >= 50 && percentage < 69.99 )
    {
        cout << "Your grade is D."<<endl;
    }
    else
    {
        cout << "Your grade is F."<<endl;
    }
    

    return 0;
}