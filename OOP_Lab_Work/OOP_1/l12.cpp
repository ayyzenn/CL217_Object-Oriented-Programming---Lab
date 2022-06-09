#include<iostream>
using namespace std;

int main()
{
    int n, i=1;
    cin>>n;
    while (i<=10)       // Printing the table of given number through while loop
    {
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
        i++;
    }
       
	return 0;
}