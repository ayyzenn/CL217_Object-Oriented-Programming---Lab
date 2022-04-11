#include<iostream>
#include<string.h>
using namespace std;
class Student
	{
	
		int Roll;
		char Name[25];
		float Marks;

		public:
		Student()           //Default Constructor
			{
				Roll = 1;
				strcpy(Name,"Kumar"); //Name="Kumar"
				Marks = 78.42;
			}

		void Display()
			{
				cout<<"\n\tRoll : "<<Roll;
				cout<<"\n\tName : "<<Name;
				cout<<"\n\tMarks : "<<Marks;
			}
	};  // end of class
int main()
	{

		Student S;          //Creating Object
		S.Display();        //Displaying Student Details
        return 0;

	

	}

/* object intialization methods
1) directly accessing data members by object
2) by member function
3) by constructors 
	   */