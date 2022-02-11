#include<iostream>
using namespace std;
struct Employee
{
    string name;
    int Emp_id;
    string gender;
    int Age;
   struct Date_of_Birth;

    struct Date_of_Birth
    {
        int day;
        int month;
        int year;
    };  
};
struct Food
{
    struct Vegetable;
    struct Fruit;

    struct Vegetable
    {
        string Food;
    };

    struct Fruit
    {
        string Food;
    };
};
int main()
{
    Employee e1,e2;
    Food f1,f2;
}






