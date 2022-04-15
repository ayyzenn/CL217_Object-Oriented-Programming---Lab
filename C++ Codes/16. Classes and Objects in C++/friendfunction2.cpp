#include<iostream>
using namespace std;
	
class RectangleTwo;   // class declaration

// class definition
class RectangleOne   
{
	int L,B; // private data members

	public:
	RectangleOne(int l,int b)
	{
        L = l;
		B = b;
	}
    
    //friend function
	friend void Sum(RectangleOne, RectangleTwo);

};  // end of RectangleOne class

class RectangleTwo
{
	int L,B; // private data members
	public:
	RectangleTwo(int l,int b)
	{
		L = l;
		B = b;
	}
    
    //friend function
    friend void Sum(RectangleOne, RectangleTwo); 
};  // end of RectangleTwo


//friend function definiton
void Sum(RectangleOne R1,RectangleTwo R2)
{
	cout<<"\n\t\tLength\tBreadth";
	cout<<"\n Rectangle 1  :   "<<R1.L<<"\t  "<<R1.B;
    cout<<"\n Rectangle 2  :   "<<R2.L<<"\t  "<<R2.B;
	cout<<"\n -------------------------------";
	cout<<"\n\tSum   :   "<<R1.L+R2.L<<"\t  "<<R1.B+R2.B;
	cout<<"\n -------------------------------";
}


int main()
{
	RectangleOne Rec1(5,3);
	RectangleTwo Rec2(2,6);

	Sum(Rec1,Rec2);
    return 0;

}  // end of main() function
