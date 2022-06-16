#include<iostream>
using namespace std;

class base1
{
    protected:
    int x;
    public:
    void readx()
    {
        cout<<"Enter the value of x: ";
        cin>>x;

    }

    void showx()
    {
       cout<<"\nThe value of x is: "<<x<<endl;
    }

    void fast()
    {
        cout<<"base 1"<<endl;
    }
};

class base2
{
    protected:
    int y;
    public:
    void ready()
    {
        cout<<"Enter the value of x: ";
        cin>>y;

    }

    void showy()
    {
       cout<<"\nThe value of x is: "<<y<<endl;
    }
    void fast()
    {
        cout<<"base 2"<<endl;
    }
};

class der : public base1 , public base2
{
    private:
    int z;
    public:
    void add()
    {
        z = x + y;
    }
    void showz()
    {
        cout<<"\nz = "<<z<<endl;
    }
};

int main()
{
    der d;
    d.readx();
    d.ready();
    d.add();

    d.showx();
    d.showy();
    d.showz();
    d.base1::fast();
    d.base2::fast();
    return 0;
}