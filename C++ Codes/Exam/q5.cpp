#include<iostream>                   //including header file

using namespace std;

class person                        //creating a class of name person.
{
    public:                         // Public members

    string name;
    int idcard ;
    long int cellphone;

    virtual void print()            
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Id card: "<<idcard<<endl;
        cout<<"Cell Phone: "<<cellphone<<endl;
    }

    void setter(string name , int idcard , long cellphone)
    {
        this->name = name;
        this->idcard = idcard;
        this->cellphone = cellphone;
    }
    // Displaying the values.
    void getter()
    {
        cout<<"Person name: "<<name<<endl;
        cout<<"Person id card: "<<idcard<<endl;
        cout<<"Person cellphone: "<<cellphone<<endl;
    }
};

class teacher : public person
{
    public:
    string depttname;
    int empid;

    virtual void print()
    {
        cout<<"Department name: "<<depttname<<endl;
        cout<<"Employee id: "<<empid<<endl;
    }

    void setter(string depttname , int empid)
    {
        person::setter( name , idcard , cellphone);
        this->depttname = depttname;
        this->empid = empid;
    }
    // Displaying the values.
    void getter()
    {
        person::getter();
        cout<<"Department name: "<<depttname<<endl;
        cout<<"Employee id: "<<empid<<endl;
    }

};

class student : public person
{
    public: 
    int rollno , semfee;

    virtual void print()
    {
        cout<<"Roll no: "<<rollno<<endl;
        cout<<"Semester fee: "<<semfee<<endl;
    }

    void setter(int rollno , int semfee)
    {
        person::setter( name , idcard , cellphone);
        this->rollno = rollno;
        this->semfee = semfee;
    }
    // Displaying the values.
    void getter()
    {
        person::getter();
        cout<<"Roll no: "<<rollno<<endl;
        cout<<"Semester fee: "<<semfee<<endl;
    }

};

class publication : public teacher , public student
{
    public:
    int noOfPublication;


};

int main()
{
    
    publication::print();       /* there is ambiguity in the print funtion as it is confused to call which print function
                                this can be resolve by creating the individual object of each class */
    person p1;                      //creatin the object
    p1.print();
    
    teacher t1;
    t1.print();

    student s1;
    s1.print();

   return 0;

}