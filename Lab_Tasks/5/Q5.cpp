#include<iostream>
using namespace std;
void copy(char *);

int main()
{
    char str1[100];
    cout << "Enter a string: ";
    cin.getline(str1,100);
    cout<<"The value of String 1 "<<str1<<endl;
    copy( str1 );
}
 void copy(char *a)
{
    char str2[100];
    int i=0;
    while ( *a!='\0')
    {
        str2[i] = *a;
        *a++;
        i++;
    }
    str2[i]= '\0';
    cout<<"The value of String 2 "<<str2<<endl;
}