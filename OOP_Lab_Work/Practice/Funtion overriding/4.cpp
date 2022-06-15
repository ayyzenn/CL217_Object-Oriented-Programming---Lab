#include<iostream>
using namespace std;

class person
{
    private:
    char name [20];
    long phno;
    public:
    void read()
    {
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"Enter your Phone number: ";
        cin>>phno;

    }

    void show()
    {
        cout<<"\nName = "<<name;
        cout<<"\nPhone number = "<<phno;
    }
};

class student: public person
{
    private:
    int rollno;
    char course[20];
    public:
    void read()
    {
        person::read();
        cout<<"Enter Rollno: ";
        cin>>rollno;
        cout<<"Enter Course name: ";
        cin>>course;
        cout<<endl;
    }

    void show()
    {
        person::show();
        cout<<"\nRoll number = "<<rollno;
        cout<<"\nCourse Name = "<<course<<endl;
    }
};

class exam:public student
{
    private:
    int marks[4];
    double per;
    public:
    void read();
    void calculate();
    void show();
};


void exam::read()
{
    student::read();
    cout<<"Enter marks: ";
    for (int i = 0 ; i < 4; i++)
    {
        cin>>marks[i];
    }
    
}

void exam::calculate()
{
    int total_marks = 0;
    for (int i = 0; i < 4; i++)
    {
        total_marks+=marks[i];
    }
    per = double(total_marks)/4;
}

void exam::show()
{
    student::show();
    cout<<"\nMarks: ";
    for (int i = 0; i < 4; i++)
    {
        cout<<marks[i]<<"\t";
    }
    cout<<"\nPerscentage: "<<per<<endl;
    
}

int main()
{
    exam e1;
    e1.read();
    e1.calculate();
    e1.show();
    return 0;

}