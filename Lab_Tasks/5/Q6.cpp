#include<iostream>
using namespace std;
void combine(char *, char *);

int main()
{
    char str1[100];
    char str2[100];
    char str3[100];

    cout << "Enter a string 1: ";
    cin.getline(str1,100);
    
    cout << "Enter a string 2: ";
    cin.getline(str2,100);
    combine( str1, str2 );
}
void combine(char *a , char *b)
{
    char str3[100];
    int i=0,j=0;
    while ( *a!='\0')
    {
        str3[i] = *a;
        *a++;
        i++;
    }
    str3[i++];
    while (*b!='\0')
    {
        str3[i] = *b;
        *b++;
        i++;
    }
    str3[i]='\0';
    cout<<str3<<endl;
}