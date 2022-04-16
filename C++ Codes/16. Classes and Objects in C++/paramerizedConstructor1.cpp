#include<iostream>
#include<string.h>
using namespace std;

class Student
	{
		int Roll;
		char Name[25];
		float Marks;

		public:
		//Parameterize Constructor
	    Student(int r,char nm[],float m)
		{
			Roll = r;
			strcpy(Name,nm);
			Marks = m;
		}

		void Display()
		{
			cout<<"\n\tRoll : "<<Roll;
			cout<<"\n\tName : "<<Name;
			cout<<"\n\tMarks : "<<Marks;
		}
	};

int main()
	{
		//Creating Object and passing values to Constructor
		Student S(2,"Ali",89.63);
		
		//Displaying Student Details
		S.Display();
        return 0;

	}