#include<iostream>
#include<string>

using namespace std;

class Student
{
	public:										// agar yaha par public na likhin tu ye private huta hy by default
	int roll;	
	char name[25];				
	float marks;  

	public:
	Student(int r, char n[], float m)
	{
		roll= r;
		strcpy(name,n);

		marks =m;
	}
	void print()
	{
		cout<<roll<<" "<<name<<" "<<marks<<endl;		 
	}
};// object is the instance of the class


int main()
{
	Student e1 = Student(101,"Saad",1000);
	Student e2(202,"Ali",99999);				// second method to invok constructor
	
	e1.print();
	e2.print();
	return 0;
	
} 	// ::=> this is scope resolution operator, it is used call a function out side the class

