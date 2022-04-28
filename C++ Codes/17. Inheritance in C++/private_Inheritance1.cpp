// tests publicly- and privately-derived classes
#include <iostream>
#include <conio.h>
using namespace std;
class A //base class
{
private:
	int privdataA;
protected:
	int protdataA;
public:
	int pubdataA;
};
class B : public A //publicly-derived class
{
public:
	void funct()
		{
			int a;
			a = privdataA; //error: not accessible
			a = protdataA; //OK
			a = pubdataA; //OK
		}
};
class C : private A //privately-derived class
{
public:
	void funct()
		{
			int a;
			a = privdataA; //error: not accessible
			a = protdataA; //OK
			a = pubdataA; //OK
		}
};
void main()
{
	int a;
	B objB;
	a = objB.privdataA; //error: not accessible
	a = objB.protdataA; //error: not accessible
	a = objB.pubdataA; //OK (A public to B)

	C objC;
    
	a = objC.privdataA; //error: not accessible
	a = objC.protdataA; //error: not accessible
	a = objC.pubdataA; //error: not accessible (A private to C)
}
// Note 
// If you don’t supply any access specifier when creating a class, private is assumed.
