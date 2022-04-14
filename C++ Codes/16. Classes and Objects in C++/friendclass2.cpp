#include<iostream>
using namespace std;

class Rectangle
{
    int L,B;

	public:
	Rectangle()
	{
		L=10;
		B=20;
	}

	friend class Square;        //Statement 1
};  // end of Rectangle class
class Square
{
	int S;

	public:
	Square()
	{
		S=5;
	}
	void Display(Rectangle Rect)
	{
		cout<<"\n\n\tLength : "<<Rect.L;
		cout<<"\n\n\tBreadth : "<<Rect.B;
		cout<<"\n\n\tSide : "<<S;
	}
}; // end of Square class

int main()
{
	Rectangle R;
	Square S;

	S.Display(R);       //Statement 2
    return 0;
}