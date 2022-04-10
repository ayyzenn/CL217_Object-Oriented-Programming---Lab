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
	ClassRoom(int id=0,int NOC=25,char c='C',string mul="New",string remks="Defaut Value")
    {
        //this->roomID=id;
    this->setroomID(id);
	this->numberOfChairs=NOC;
	this->boardType=c;
	this->setmultimedia(mul);
	this->setremarks(remks);
    }

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
	ClassRoom CR0,CR1(1),CR2(2,30),CR3(3,35,'M'),
	CR4(4,40,'M',"Repairing.."),CR5(5,40,'M',"Repairing..","Remarks added from Main");
	CR0.display();
	CR1.display();
	CR2.display();
	CR3.display();
	CR4.display();
	CR5.display();
    return 0;
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

