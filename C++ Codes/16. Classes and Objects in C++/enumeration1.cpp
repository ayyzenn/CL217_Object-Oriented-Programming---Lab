#include <iostream>
using namespace std;
//specify enum type
enum days_of_week { Sun, Mon, Tue, Wed, Thu, Fri, Sat };
int main()
{
days_of_week day1, day2; //define variables of type days_of_week

day1 = Mon; //give values to variables
day2 = Thu; 
int diff = day2 - day1; //can do integer arithmetic

cout << "Days between = " << diff << endl;
if(day1 < day2) //can do comparisons
{
cout << "day1 comes before day2\n";
}
return 0;
}

