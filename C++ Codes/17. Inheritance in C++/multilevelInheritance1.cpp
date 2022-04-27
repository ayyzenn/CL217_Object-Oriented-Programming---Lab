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
};  // end of person class
class student : public person {
  private:
    int rollno;
    char course[20];
  public:
    void read() {
      person::read();//Access person's read()
      cout<<"Enter rollno and course=";
      cin>>rollno>>course;
    }
    void show() {
      person::show(); //Access person's show()
      cout<<"\nRollno = "<<rollno;
      cout<<"\nCourse ="<<course;
    }
}; // end of student class
class exam : public student {
 private:
   int m[4];
   double per;
 public:
   void read() ;
   void cal();
   void show() ;
};  // end of exam class


// Function definitions
  void exam::read() {
    student::read();//Access student's read()
    cout<<"Enter marks :";
    for(int i=0;i<4;i++)
      cin>>m[i];
  }
  void exam::cal() {
    int tot_marks=0;
    for(int i=0;i<4;i++)
      tot_marks+=m[i];
      per=double(tot_marks)/4;
  }
  void exam::show() {
    student::show();//Access student's show()
    cout<<"\nMarks :";
    for(int i=0;i<4;i++)
      cout<<m[i]<<"\t";
      cout<<"\nPercentage = "<<per;
      }
//main function
int main() {
   exam e1;
   e1.read(); 
   e1.cal();  
   e1.show(); 
   return 0;
}