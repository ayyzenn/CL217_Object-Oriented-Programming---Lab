#include<iostream>
#include<cctype>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	int ran;
    srand(time(0));         // code for making lodo or dispalying random number from 1  to 6;
    ran =rand();
    ran=ran % 6 + 1;    
    cout<<"this is "<<ran<<endl;
	return 0;
}