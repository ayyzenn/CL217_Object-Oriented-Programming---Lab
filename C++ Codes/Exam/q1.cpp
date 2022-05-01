#include<iostream>                      //including header file

using namespace std;

class student                           //creating a class of name student.
{
    private:                //  Private members
    int admno;              
    char sname[20];
    float eng ,math ,science , total;

    float ctotal()          // Private Method
    {
        return (eng + math + science);
    }

    public:                 // Public Methods

    void takeData(int a , char n[], int e ,int m ,int s);
    void showdata();
};

void student::takeData(int a , char n[], int e ,int m ,int s)           /* Using the function outside the class with the
                                                                            help of scope resolution operator */
{
    // Assigning the private members 
    admno = a;    
    for (int i = 0; i < 20; i++)
    {
        sname[i] = n[i];
    }

    eng = e;
    math = m;
    science = s;
    ctotal();
    
}
// Displaying the values.
void student::showdata()
{
    cout<<"Admission number: "<<admno<<endl;
    cout<<"Student name: "<<sname<<endl;
    cout<<"English Marks: "<<eng<<endl;
    cout<<"Math Marks: "<<math<<endl;
    cout<<"Science Marks: "<<science<<endl;
    cout<<"Total Marks: "<<ctotal()<<endl;
}

int main()
{
    student s1;             //creatin the object

    s1.takeData(12 ,"Saad" , 1 , 2, 3);     // calling the function with the help of object.
    s1.showdata();
    return 0;
}

