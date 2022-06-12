
#include <string>
#include <iostream>
using namespace std;

class ClassRoom 
{
    private:
    int roomID;
    int numberOfChairs;
    char boardType; // C for chalk and M for marker
    string multimedia;
    string remarks;

    public:
        
        ClassRoom();  //consturctor declaration
        
        void setroomID(int);
        void setnumberOfChairs(int);
        void setboardType(char);
        void setmultimedia(string);
        void setremarks(string);

        int  getroomID();
        int  getnumberOfChairs();
        char getboardType();
        string getmultimedia();
        string getremarks();

        void display();
};
int main ()
{
	ClassRoom CR0;

	CR0.display();
	
    return 0;
}

//--------------------------------------Constructors
ClassRoom::ClassRoom()
{
	//this pointer refers to the current class object
	this->roomID=0;
	this->numberOfChairs=0;
	this->boardType='M';
	this->multimedia="New";
	this->remarks="Default Constructor";
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

void ClassRoom::display()
{
	//ClassRoom cls;
	//cout<<"Room ID \t: "<<cls.getroomID()<<endl;

	cout<<"Room ID \t: "<<this->getroomID()<<endl;
	cout<<"N.O. Chairs \t: "<<this->getnumberOfChairs()<<endl;
	cout<<"Board Type \t: "<<this->getboardType()<<endl;
	cout<<"Multimedia \t: "<<this->getmultimedia()<<endl;
	cout<<"Remarks \t: "<<this->getremarks()<<endl;
	cout<<"----------------------------------"<<endl;
}