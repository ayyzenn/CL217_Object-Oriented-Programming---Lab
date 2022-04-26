#include<iostream>
using namespace std;
class person {
  private:
    char name[20];
    long int phno;
  public:
    void read() {
      cout<<"Enter name and phno = ";
      cin>>name>>phno;
    }
    void show() {
      cout<<"\nName = "<<name;
      cout<<"\nPhone number = "<<phno;
    }
}; //Base class specification ends
class student : public person {
  private:
    int rollno;
    char course[20];
  public:
    void read() {
      person::read();
      cout<<"Enter rollno and course=";
      cin>>rollno>>course;
    }
    void show() {
      person::show();
      cout<<"\nRollno = "<<rollno;
      cout<<"\nCourse = "<<course;
    }
}; //Derived class specification ends
class teacher : public person {
   private:
     char dept_name[10];
     char qual[10];
   public:
     void read() {
       person::read();
       cout<<"Enter dept_name and qualification = ";
       cin>>dept_name>>qual;
       }
     void show() {
       person::show();
       cout<<"\nDepartment name = "<<dept_name;
       cout<<"\nQualification = "<<qual;
     }
}; //Derived class specification ends
int main() {
   student s1;
   cout<<"Enter student Information\n";
   s1.read();
   cout<<"Displaying Student Information ";
   s1.show();

   teacher t1;
   cout<<"\nEnter teacher Information\n";
   t1.read();
   cout<<"Displaying teacher Information ";
   t1.show(); 
   return 0;
}