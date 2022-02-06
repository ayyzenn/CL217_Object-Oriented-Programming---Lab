#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    cout<<"Absolute value of -2 is: "<<abs(-2)<<endl;
    cout<<"Arccosine of 1 is: "<<acos(1)<<endl;
    cout<<"Arcsine of 1 is: "<<asin(1)<<endl;
    cout<<"Arctangent of 1 is: "<<atan(1)<<endl;
    cout<<"Cube root of 8 is: "<<cbrt(9)<<endl;
    cout<<"Value of 89.99 rounded up to its nearest integer is: "<<ceil(89.99)<<endl;
    cout<<"Cosine of 0 is: "<<cos(0)<<endl;
    cout<<"Hyperbolic cosine of 1 is: "<<cosh(1)<<endl;
    cout<<"Value of E to the power 2 is: "<<exp(2)<<endl;
    cout<<"(e to the power 2) - 1 is: "<<expm1(2)<<endl;
    cout<<"Absolute value of a floating -2.9 is: "<<fabs(-2.9)<<endl;
    cout<<"Positive difference between 8 and 12 is: "<<fdim(8,12)<<endl;
    cout<<"Value of 2.7 rounded down to its nearest integer is: "<<floor(2.7)<<endl;
    cout<<"Square root of (5^2 + 3^2 ) without intermediate overflow or underflow is: "<<hypot(5, 3)<<endl;
    cout<<"Value of 2*3+4 without losing precision is: "<<fma(2, 3, 4)<<endl;
    cout<<"The highest value of a floating 2.56 and 7.5 is: "<<fmax(2.56 , 7.5)<<endl;
    cout<<"The lowest value of a floating 2.56 and 7.5 is: "<<fmin(2.56 , 7.5)<<endl;
    cout<<"The floating point remainder of 2.56/7.5 is: "<<fmod(2.56 , 7.5)<<endl;
    cout<<"The value of 2 to the power of 3 is: "<<pow(2,3)<<endl;
    cout<<"The sine of 5 (5 is in radians) is: "<<sin(5)<<endl;
    cout<<"The hyperbolic sine of a double value is "<<sinh(3.1)<<endl;
    cout<<"The tangent of 45 is: "<<tan(45)<<endl;
    cout<<"The hyperbolic tangent of a double value is: "<<tanh(45)<<endl;
    return 0;
}