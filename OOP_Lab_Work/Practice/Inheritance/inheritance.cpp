#include<iostream>
#include<iomanip>

using namespace std;

class rectangleType
{
    public:

    void setDimension(double l, double w);
    double getLength() const;
    double getWidth() const;
    double area() const;
    double perimeter() const;
    void print() const;

    rectangleType();
    rectangleType(double l, double w);

    private:

    double length;
    double width;
};

void rectangleType::setDimension(double l, double w)
{
    if (l >= 0)
        length = l;
    else
        length = 0;

    if (w >= 0)
        width = w;
    else
        width = 0;
}
double rectangleType::getLength() const
{
    return length;
}
double rectangleType::getWidth() const
{
    return width;
}
double rectangleType::area() const
{
    return length * width;
}

double rectangleType::perimeter() const
{
    return 2 * (length + width);
}
void rectangleType::print() const
{
    cout<< "Length = " << length<< "; Width = " << width;
}
rectangleType::rectangleType(double l, double w)
{
    setDimension(l, w);
}
rectangleType::rectangleType()
{
    length = 0;
    width = 0;
}

class boxType: public rectangleType
{
    public:

    void setDimension(double l, double w, double h);
    double getHeight() const;
    double area() const;
    double volume() const;
    void print() const;

    boxType();
    boxType(double l, double w, double h);

    private:
    double height;
};

void boxType::print() const
{
    rectangleType::print();
    
    cout << "; Height = " << height;
}

void boxType::setDimension(double l, double w, double h)
{
    rectangleType::setDimension(l, w);

    if (h >= 0)
        height = h;
    else
        height = 0;
}

double boxType::getHeight() const
{
    return height;
}



double boxType::area() const
{
    return 2 * (getLength() * getWidth() + getLength() * height + getWidth() * height);
}


double boxType::volume() const
{
    return rectangleType::area() * height;
}   

boxType::boxType()
{
    height = 0.0;
}


boxType::boxType(double l, double w, double h) : rectangleType(l, w)
{
    if (h >= 0)
    height = h;
    else
    height = 0;
}


int main()
{
    rectangleType myRectangle1;
    rectangleType myRectangle2(8, 6);
    boxType myBox1;
    boxType myBox2(10, 7, 3);

    cout << fixed << showpoint << setprecision(2); //Line 5
    cout << "Line 6: myRectangle1: ";
    myRectangle1.print();
    cout << endl;
    cout << "Line 9: Area of myRectangle1: "<< myRectangle1.area() << endl; //Line 6

    cout << "Line 10: myRectangle2: ";
    myRectangle2.print();
    cout << endl;
    cout << "Line 13: Area of myRectangle2: "<< myRectangle2.area() << endl; //Line 10

    cout << "Line 14: myBox1: ";
    myBox1.print();
    cout << endl;
    cout << "Line 17: Surface Area of myBox1: "<< myBox1.area() << endl;
    cout << "Line 18: Volume of myBox1: "<< myBox1.volume() << endl;
    cout << "Line 19: myBox2: ";
    myBox2.print();
    cout << endl;
    cout << "Line 22: Surface Area of myBox2: "<< myBox2.area() << endl;
    cout << "Line 23: Volume of myBox2: "<< myBox2.volume() << endl;

    return 0;

}