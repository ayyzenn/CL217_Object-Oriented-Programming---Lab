#include<iostream>                  //including header file

using namespace std;

int *multiply( int *x , int *y);                // function prototype
int *multiply( int *x , int *y , int *z);       // function prototype

int main()
{
    int a=2 , b=3 , c=4;

    int *p ,*q ,*r ;            // creating the pointers

    p = &a;                 //storing the address
    q = &b;                 //storing the address
    r = &c;                 //storing the address
    cout<<"2*3 = "<<*multiply(p ,q)<<endl;  //calling the function
    cout<<"2*3*4 = "<<*multiply(p ,q ,r)<<endl;     // calling the function
    

    return 0;
}

int *multiply(int *x , int *y)      // using the function outside of the main function
{
    int *product;

    *product = *x * *y;

    return product;

}

int *multiply(int *x , int *y , int *z)      // using the function outside of the main function
{
    int *product;

    *product = *x * *y * *z;

    return product;

}