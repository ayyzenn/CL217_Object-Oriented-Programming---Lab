#include<iostream>
#include<string.h>
using namespace std;

class Student
	{
		int Roll;
		string Name;
		float Marks;

		public:
		Student(int r,string nm,float m) //Parameterize Constructor
		{
			Roll = r;
			Name=nm;
			Marks = m;
		}

		// Student(Student &S)
        // {
        //    Roll=S.Roll;
		//    Name=S.Name;
		//    Marks =S.Marks;
        // }

		void Display()
		{
			cout<<"\n\tRoll : "<<Roll;
			cout<<"\n\tName : "<<Name;
			cout<<"\n\tMarks : "<<Marks;
		}
	};  // end of class


	int main()
	{
		Student S1(2,"Ali",89.63);

		Student S2(S1);    //copy S1 to S2

		Student S3=S1;    //copy S1 to S3

		cout<<"\n\tValues in object S1";
		S1.Display();

		cout<<"\n\tValues in object S2";
		S2.Display();

		cout<<"\n\tValues in object S3";
		S3.Display();
	}  // end of main() function
