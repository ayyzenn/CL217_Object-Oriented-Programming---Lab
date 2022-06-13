#include<iostream>
#include<iomanip>

using namespace std;

class teacher;

class student
{
   

    private:
    int id;
    string name;
    
    public:
    friend void setData(student s , teacher t);

};

class teacher
{
    private:
    int id1;
    string name1;
    friend void setData(student s, teacher t );
};



void setData(student s , teacher t)
{
    s.name = "Saad";
    s.id = 123;

    cout<<"Name: "<<s.name<<endl;
    cout<<"Id: "<<s.id<<endl;

}

int main()
{
    student s;
    teacher t;

    setData(s , t);

    return 0;

}