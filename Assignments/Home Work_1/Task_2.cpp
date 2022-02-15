#include<iostream>

using namespace std;

int main()

{
    int salary;

    cout << "Enter your salary: ";
    cin >> salary;

    if ( salary < 10000 ) 
    {
        cout << "Your Salary is: " << salary << endl;
        cout << "And no fund deducted." << endl;

    }

    else

    {

        if ( salary >= 10000 && salary <= 20000 )

        {

            int fund_1 =1000;
            salary-=fund_1;

            cout << "Net payable amount is: " << salary << " \nAnd fund deducted is: " << fund_1 <<endl;

        }

        else if ( salary >= 20000 )

        {

            float fund_2 = 0.07;
            float fund_3 = salary * fund_2;
            salary -= fund_3;

            cout << "Net payable amount is " << salary << " and fund deducted is " << fund_3 <<endl;
            
        }
    }
}