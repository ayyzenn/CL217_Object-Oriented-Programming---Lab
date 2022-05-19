#include<iostream>                  //Including header files
using namespace std;
class complex                       // Class with complex name
{
    public:                         // Class members which are public.
    float rnum;
    float inum;
    float result;

    public:                         // Function prototypes and are public.
    void set(float, float);         // function to set data
    void disp();                    // function to get data
    complex sum(complex);           // function to get sum of complex number

};
// using a function outside the class with the help of scope resolution operator
void complex::set(float r ,float i)
{
    // Assigning values to the class members 
    rnum = r;
    inum = i;
}
// displaying the values 
void complex::disp()
{
    cout<<"Complex number: "<<rnum<<" + "<<inum<<"i"<<endl;
}

complex complex::sum(complex c)
{
    // calculating the sum
    c.rnum = rnum + c.rnum;             

    c.inum = inum + c.inum;    
    return c;
}

int main()
{
    complex c1 , c2, c3;                 // creating object

    // passing values
    cout<<"Number #1"<<endl;
    c1.set(4 , 2);
    c1.disp();

    cout<<"Number #2"<<endl;
    c2.set(3 , 8);
    c2.disp();

    c3 = c2.sum(c1);
    cout<<"Sum of two complex number is: "<<c3.rnum<<" + "<<c3.inum<<"i"<<endl;

}






