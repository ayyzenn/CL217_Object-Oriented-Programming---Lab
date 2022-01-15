#include<iostream>
#include<cctype>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    int ran;
    srand(time(0));
    ran = rand();
    ran = ran % 99 + 1;
    cout<<ran<<endl;  
}
