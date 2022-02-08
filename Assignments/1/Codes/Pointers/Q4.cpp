#include<iostream>
using namespace std;
void length(char *);

int main()
{
    char str[100];
    cout << "Enter a string: ";
    cin.get(str,100);
    length( str );
    
}

void length(char *a)
{
    int count = 0;
    while ( *a!='\0')
    {
        count++;
        *a++;
    }
    
    cout<<"Length of the string is "<<count<<endl;
}