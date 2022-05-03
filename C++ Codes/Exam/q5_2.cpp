#include <iostream>

using namespace std;

class person 
{
    public:
    string name , idCard , cellphone;
    virtual void print() = 0;
};

class Teacher : public person
{
    public:
    string depttname;
    int empid;
    void set_Dname(string dname)
    {
        depttname = dname;
    }
    void set_empid(int emp)
    {
        empid = emp;
    }
    void set_name(string n)
    {
       name = n;
    }
    void set_idCard(string idC)
    {
        idCard = idC;
    }
    void set_cellphone(string cellp)
    {
        
       cellphone = cellp;
    }
    string Get_Dname()
    {
      return depttname;
    }
    int Get_empid()
    {
       return empid;
    }
    string Get_name()
    {
      return name;
    }
    string Get_idCard()
    {
        return idCard;
    }
    string Get_cellphone()
    {
        
       return cellphone;
    }
    void print()
    {
        cout << Get_idCard() << endl;
        cout << Get_empid() << endl;
        cout << Get_cellphone() << endl;
        cout << Get_name() << endl;
    }
};

class student : public person
{
    public:
    int Rollno;
    int semFEE;
    void set_Rollno(int Rno)
    {
        Rollno = Rno;
    }
    void set_semFee(int sem)
    {
        semFEE = sem;
    } 
    void set_name(string n)
    {
       name = n;
    }
    void set_idCard(string idC)
    {
        idCard = idC;
    }
    void set_cellphone(string cellp)
    {
        
       cellphone = cellp;
    }
   int Get_Rollno()
    {
       return Rollno;
    }
    int Get_semFee()
    {
       return semFEE;
    } 
    string Get_name()
    {
      return name;
    }
    string Get_idCard()
    {
       return idCard;
    }
    string Get_cellphone()
    {
        return cellphone;
    }
    void print()
    {
        cout << Get_Rollno() << endl;
        cout << Get_semFee() << endl;
        cout << Get_cellphone() << endl;
        cout << Get_name() << endl;
    }
};


class Publications : public Teacher , public  student
{
    public:
    int no_of_pub;
    void set_no_of_pub(int pub)
    {
        no_of_pub = pub;
    }
    int Get_no_of_pub()
    {
       return no_of_pub;
    }
    void print()
    {
        cout << Get_Rollno() << endl;
        cout << Get_semFee() << endl;
        cout << student::Get_cellphone() << endl;
        cout << student::Get_name() << endl;
        cout << Teacher::Get_cellphone() << endl;
        cout << Teacher::Get_name() << endl;
        cout << Teacher::Get_idCard() << endl;
        cout << student::Get_idCard() << endl;
    }
};

int main()
{
    Teacher T1;
    T1.set_Dname("science");
    T1.set_empid(23);
    T1.set_idCard("345");
    T1.set_cellphone("2345567754");
    T1.set_name("faheem");
    T1.print();

    student S1;
    S1.set_Rollno(3333);
    S1.set_semFee(23);
    S1.set_idCard("345");
    S1.set_cellphone("2345567754");
    S1.set_name("faheem");
    S1.print();

    Publications P1;
    P1.set_Dname("science");
    P1.set_empid(23);
    P1.set_Rollno(3333);
    P1.set_semFee(23);
    P1.student::set_idCard("345"); //ambiguity
    P1.student::set_cellphone("2345567754"); //ambiguity
    P1.student::set_name("faheem");
    P1.Teacher::set_idCard("345"); //ambiguity
    P1.Teacher::set_cellphone("2345567754"); //ambiguity
    P1.Teacher::set_name("faheem");//ambiguity
    P1.print();
    
    return 0;
}