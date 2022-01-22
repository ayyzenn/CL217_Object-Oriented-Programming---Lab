#include<iostream>
using namespace std;
int main()
{
    float temperature;

    cout << "Today's Temperature : ";
    cin >> temperature;

    if (temperature > 35)
    {
        cout << "Forecast : Today is a HOT day"<<endl;
    }
    else if (temperature >= 25 && temperature <= 35)
    {
        cout << "Forecast : Today is a PLEASENT day"<<endl;
    }
    else if (temperature < 25)
    {
        cout << "Forecast : Today is a COOL day"<<endl;
    }
    else
    {
        cout << "The entered value is NOT valid"<<endl;
    }
    return 0;
}