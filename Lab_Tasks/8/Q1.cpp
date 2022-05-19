#include<iostream>                   //Including header files
using namespace std;
class rectangle                      // Class with rectangle name
{
    private:                        // Class members which are private.
    float length;
    float width;

    public:                          // Function prototypes and are public.
    void setlength(float l);         // function to set length
    void setwidth(float w);           // function to set width
    float perimeter(float length , float width);                 // function to get perimeter
    float area(float length , float width);                      // function to get area
    void show();                                                 // function to display data
    int sameArea(rectangle r1);                                  // function to compare two rectangles

};
// using a function outside the class with the help of scope resolution operator
void rectangle::setlength(float l)
{
    length = l;                 //setting length
}

void rectangle::setwidth(float w)
{
    width = w;                  //setting width
}

float rectangle::perimeter(float length , float width)
{
    return 2 * (length+width);      // calculating perimeter
}

float rectangle::area(float length , float width)
{
    return length * width;           // calculating area
}

void rectangle::show()              // displaying data
{
    cout<<"Length is: "<<length<<endl;
    cout<<"Width is: "<<width<<endl;
    cout<<"Perimeter is: "<<perimeter(length , width)<<endl;
    cout<<"Area is: "<<area(length , width)<<endl;
}

int rectangle::sameArea(rectangle r1)
{
    float areaf = length * width;               //calculating the area of the first rectangle
	float areas = r1.length * r1.width;          //calculating the area of the second rectangle
	if (areaf == areas)                         //comparing the areas 
    {
        cout<<"Area is same."<<endl;
		return 1;
    }
    else
    {
        cout<<"Area is not same."<<endl;
	    return 0;
    }
    
}

int main()
{
    rectangle r1 , r2;                      // creating object

    r1.setlength(5);                        //passing values.
    r1.setwidth(2.5);
    cout<<"Rectangle #1 "<<endl;
    r1.show();
    cout<<"-----------------------------------------------"<<endl;

    r2.setlength(5);
    r2.setwidth(18.9);
    cout<<"Rectangle #2 "<<endl;
    r2.show();
    cout<<"-----------------------------------------------"<<endl;

    cout<<"Comperision of regtangle #1 and regtangle #2"<<endl;
    r1.sameArea(r2);
    cout<<"-----------------------------------------------"<<endl;

    cout<<"By changing the values of rectangle #1"<<endl;

    r1.setlength(15);
    r1.setwidth(6.3);
    cout<<"Rectangle #1 "<<endl;
    r1.show();
    cout<<"-----------------------------------------------"<<endl;

    cout<<"Again comperision of regtangle #1 and regtangle #2"<<endl;
    r1.sameArea(r2);
    cout<<"-----------------------------------------------"<<endl;
}