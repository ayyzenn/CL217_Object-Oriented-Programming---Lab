/* Write a program to input the name of student and marks of three subjects, 
calculate the total marks and average marks. Each subjects has maximum of 100 marks.*/
#include <iostream>
using namespace std;

class StudentRecord
{
   private:
    char name[15];
    float s1,s2,s3, total, avg;
    
    public:
    void getRecord()
    {
       cout<<"Enter Name of the student: "; cin>>name;
       cout<<"Enter marks of 1st subject: "; cin>>s1;
       cout<<"Enter marks of 2nd subject: "; cin>>s2;
       cout<<"Enter marks of 3rd subject: "; cin>>s3;
       total= s1+s2+s3;
       avg= total/3.0;
    }
    void displayRecord()
    {
       cout<<"Name of the student : "<<name<<endl;
       cout<<"Marks of 1st subject : "<<s1<<endl;
       cout<<"Marks of 2nd subject : "<<s2<<endl;
       cout<<"Marks of 3rd subject : "<<s3<<endl; 
       cout<<"Total Marks : "<<total<<endl;
       cout<<"Average Marks : "<<avg<<endl;
    }
}; // end of class body
 
int main () {

    // Declare an object of class
    StudentRecord stdRecord;

    // accessing member function
    stdRecord.getRecord();
    stdRecord.displayRecord();
    return 0;
}
