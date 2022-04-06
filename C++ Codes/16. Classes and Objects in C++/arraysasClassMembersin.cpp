#include<iostream>
using namespace std;

const int size=5;

class Student 
{

  int roll_no;
  int marks[size];

  public:
    void getdata();
    void tot_marks();
};  // end of clas body


int main() 
{
   Student s1;
   s1.getdata();
   s1.tot_marks();

   return 0;
} //ends of main() function

//function definitions
void Student :: getdata() 
{
      cout<<"\nEnter roll no: ";
      cin>>roll_no;
      for(int i=0; i<size; i++) 
      {
        cout<<"Enter marks in subject"<<(i+1)<<": ";
        cin>>marks[i] ;
      }
}
//calculating total marks
void Student :: tot_marks () 
{
      int total=0;
      for(int i=0; i<size; i++)
      {
          total=total+marks[i];
      }
      cout<<"\nTotal marks "<<total;
}



