#include<iostream>                      //Including header files
#include<cstring>
using namespace std;
class Test                              // Class with Test name
{
    char paper[20];                     // Class members which are private.
    int marks;
    public:
    Test ()                             // default constructor
    {                    
        strcpy (paper, "Computer");
        marks = 0;

        cout<<"Paper: "<<paper<<endl;
        cout<<"Marks: "<<marks<<endl;
        cout<<"---------------------------------------"<<endl;
    }

    Test (char p[])                     // parameterized constructor    
    {
        strcpy(paper, p);
        marks = 0;
        cout<<"Paper: "<<paper<<endl;
        cout<<"Marks: "<<marks<<endl;
        cout<<"---------------------------------------"<<endl;
    }

    Test (int m)                        // parameterized constructor
    {
        strcpy(paper,"Computer");
        marks = m;
        cout<<"Paper: "<<paper<<endl;
        cout<<"Marks: "<<marks<<endl;
        cout<<"---------------------------------------"<<endl;
    }

    Test (char p[], int m)              // parameterized constructor
    {
        strcpy (paper, p);
        marks = m;
        cout<<"Paper: "<<paper<<endl;
        cout<<"Marks: "<<marks<<endl;
        cout<<"---------------------------------------"<<endl;
    }
};
int main()
{
    Test t1 , t2("Saad") , t3(20) , t4("Saad" , 40);           // creating object
}   
















