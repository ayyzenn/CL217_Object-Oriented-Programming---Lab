#include<iostream>              //Including header files
#include<cstring>
using namespace std;
class student                   // Class with sudent name
{
    private:                    // Class members which are private.
    int admno;
    char sname[20];
    float eng, math , science , total;
    float ctotal( float eng , float math , float science);

    public:                     // Function prototypes and are public.
    void takedata(int a , char n[], float e , float m , float s );          // function to get data
    void showdata();                                                        // function to display data

};
// using a function outside the class with the help of scope resolution operator
void student::takedata(int a , char n[] , float e , float m , float s )     
{
    int i;
    // Assigning values to the class members 
    admno = a;

    for (i = 0; i < strlen(n); i++)
    {
        sname[i] = n[i];
    } 

    sname[i] = '\0';
    eng = e;
    math = m;
    science = s;
}

float student::ctotal(float eng , float math , float science )
{
    total = eng + math + science;           // calculating the total

    return total;
}
// displaying the values 
void student::showdata()
{
    cout<<"Admission no is: "<<admno<<endl;
    cout<<"Student name is: "<<sname<<endl;
    cout<<"English marks: "<<eng<<endl;
    cout<<"Math marks: "<<math<<endl;
    cout<<"Science marks: "<<science<<endl;

    cout<<"Total marks are: "<<ctotal( eng , math , science )<<endl;
}

int main()
{
    student s;          // creating object

    s.takedata(12 , "Saad Ahmad", 12.1 , 12 , 34); // passing values
    s.showdata();
}







