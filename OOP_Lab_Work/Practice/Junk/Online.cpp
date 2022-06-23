#include<iostream>
#include<string>

using namespace std;

class Student
{
	public:										// agar yaha par public na likhin tu ye private huta hy by default
	int roll;	
	string name;				
	float marks;  

	public:
	Student(int r, char n[], float m)
	{
		roll= r;
		name=n;
		marks =m;
	}
	void print()
	{
		cout<<roll<<" "<<name<<" "<<marks<<endl;		 
	}
};// object is the instance of the class


int main()
{
	Student s1(101,"Saad",1000);// second method to invok constructor

	Student s2=s1;
	
	s1.print();
	s2.print();
	return 0;
	
} 	// ::=> this is scope resolution operator, it is used call a function out side the class

