#include<iostream>
using namespace std;
class Sample
{
    private:
    int x;
    double y;
    public :
    Sample(); //Constructor 1
    Sample(int); //Constructor 2
    Sample(int, int); //Constructor 3
    Sample(int, double); //Constructor 4
};
Sample::Sample()
{
    x = 0;
    y = 0;
}
Sample::Sample(int num)
{
    x = num;
    y = 0;
}
Sample::Sample(int num , int num1)
{
    x = num;
    y = num1;
}
Sample::Sample(int num , double num1)
{
    x = num;
    y = num1;
}
int main()
{
    Sample s , s1(12) , s2(1 , 2) , s3(5 , 6.5);
}







