
#include<iostream>
using namespace std;

class Teacher;

class Student
{
    private:
    int id;
    string name;
    public:
    friend void setData(Student, Teacher);

    void add(int, int);

    void getData(int i, string n)
    {
        id=i;
        name=n;
    }

};  // end of class

class Teacher 
{
    private:
    int id1;
    string name1;
    
    public: 
    friend void setData(Student, Teacher);
};

int main()
{
    Student s1,s2;
    Teacher t1;

    setData(s1,t1);

    s2.getData(11,"Khan");

    return 0;
}

void  setData(Student s, Teacher t)
{
    s.name="Ali";
    s.id=33;

    t.name1="Hassan";
    t.id1=76767;

    cout<<"Student id is:"<<s.id<<endl;
    cout<<"Student name is :"<<s.name<<endl;

    cout<<"Teacher id is:"<<t.id1<<endl;
    cout<<"Teacher name is :"<<t.name1<<endl;
}

