#include <iostream>
using namespace std;
class bClass
{
public:
	void setData(double);
	void setData(char, double);
	void print() const;
	bClass(char ch = '*', double u = 0.0);   

protected:
	char bCh;
private:
	double bX;
};
void bClass::setData(double u)
{
	bX = u;
}
void bClass::setData(char ch, double u)
{
	bCh = ch;
	bX = u;
}
void bClass::print() const
{
	cout << "Base class: bCh = " << bCh << ", bX = " << bX<< endl;
}
bClass::bClass(char ch, double u)
{
	bCh = ch;
	bX = u;
}
class dClass: public bClass
{
public:
	void setData(char, double, int);
	void print() const;
	dClass(char ch = '*', double u = 0.0, int x = 0);
private:
	int dA; 

};
void dClass::setData(char ch, double v, int a)
{
	bClass::setData(v);
	bCh = ch; //initialize bCh using the assignment statement
	dA = a;
}
void dClass::print() const
{
	bClass::print();
	cout << "Derived class dA = " << dA << endl;
}
dClass::dClass(char ch, double u, int x)
	: bClass(ch, u)
{
	dA = x;
}
int main()
{
	bClass bObject; //Line 1
	dClass dObject; //Line 2
	bObject.print(); //Line 3
	cout << endl; //Line 4
	cout << "*** Derived class object ***" << endl; //Line 5
	dObject.setData('&', 2.5, 7); //Line 6
	dObject.print(); //Line 7
	return 0;

}
