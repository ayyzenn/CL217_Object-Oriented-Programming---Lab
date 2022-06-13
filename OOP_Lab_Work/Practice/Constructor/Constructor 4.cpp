
#include <string>
#include <iostream>

using namespace std;

class ClassRoom 
{

private:

    // class members
     int roomID;
     int numberOfChairs;
     char boardType; // C for chalk and M for marker
     string multimedia;
     
public:


     ClassRoom(int id=0,int NOC=25,char c='C',string mul="New"); // default constructor


     void setroomID(int);
     void setnumberOfChairs(int);
     void setboardType(char);
     void setmultimedia(string);


     int getroomID();
     int getnumberOfChairs();
     char getboardType();
     string getmultimedia();

     void display();

};


int main ()

{
     ClassRoom 
     CR0,
     CR1(1),
     CR2(2,30),
     CR3(3,35,'M'), 
     CR4(4,40,'M',"Repairing.."),
     CR5(5,40,'M',"Repairing..");


     CR0.display();
     CR1.display();
     CR2.display();
     CR3.display();
     CR4.display();
     CR5.display();

    return 0;
}

//--------------------------------------Constructor with perameters


ClassRoom::ClassRoom(int id,int NOC,char c,string mul)


{
    this->setroomID(id);

    this->setnumberOfChairs(NOC);

    this->setboardType(c);

    this->setmultimedia(mul);

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

//---------------------------------------Getter Functions
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

void ClassRoom::display()           // Disalying the result
{
    cout<<"Room ID \t: "<<this->getroomID()<<endl;
    cout<<"N.O. Chairs \t: "<<this->getnumberOfChairs()<<endl;
    cout<<"Board Type \t: "<<this->getboardType()<<endl;
    cout<<"Multimedia \t: "<<this->getmultimedia()<<endl;
    cout<<"----------------------------------"<<endl;
}