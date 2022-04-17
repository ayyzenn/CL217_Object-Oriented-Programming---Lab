//Given example demonstrates the concept of parameterized constructor.
#include <string>
#include <iostream>
using namespace std;

class ClassRoom {
private:
int roomID;
int numberOfChairs;
char boardType; // C for chalk and M for marker
string multimedia;
string remarks;

public:
	ClassRoom(int id,int NOC,char,string mul, string rmks);
	
	void setroomID(int);
	void setnumberOfChairs(int);
	void setboardType(char);
	void setmultimedia(string);
	void setremarks(string);
	
	int getroomID();
	int getnumberOfChairs();
	char getboardType();
	string getmultimedia();
	string getremarks();
	
	void display();
};
int main ()
{
	ClassRoom CR(11,25,'M',"Repairing..","Remarks added from Main");
	CR.display();
    return 0;
}
//--------------------------------------Constructors
ClassRoom::ClassRoom(int id,int NOC,char c,string mul, string remks)
{
	//this->roomID=id;
    this->setroomID(id);
	this->numberOfChairs=NOC;
	this->boardType=c;
	this->setmultimedia(mul);
	this->setremarks(remks+"\nConstructor with All(5)Parameters (ID,NOC,BoardType,Multimedia,Remarks)");
}
//---------------------------------------Setter Functions
void ClassRoom::setroomID(int id)
{
	this->roomID=id;
}

void ClassRoom::setnumberOfChairs(int NOC)
{
	this->numberOfChairs=NOC;
}
void ClassRoom::setboardType(char c)
{
	this->boardType=c;
}
void ClassRoom::setmultimedia(string str)
{
	this->multimedia=str;
}
void ClassRoom::setremarks(string str)
{
	this->remarks=str;
}
//--------------------------------------Getter Functions
int ClassRoom::getroomID()
{
	return this->roomID;
}
int ClassRoom::getnumberOfChairs()
{
	return this->numberOfChairs;
}
char ClassRoom::getboardType()
{
	return (this->boardType);
}
string ClassRoom::getmultimedia()
{
	return this->multimedia;
}

string ClassRoom::getremarks()
{
	return this->remarks;
}
//------------------------------------Printing Functions
void ClassRoom::display()
{
	cout<<"Room ID \t: "<<this->getroomID()<<endl;
	cout<<"N.O. Chairs \t: "<<this->getnumberOfChairs()<<endl;
	cout<<"Board Type \t: "<<this->getboardType()<<endl;
	cout<<"Multimedia \t: "<<this->getmultimedia()<<endl;
	cout<<"Remarks \t: \n"<<this->getremarks()<<endl;
	cout<<"----------------------------------"<<endl;
}
