#include<iostream>
using namespace std;

class animal
{
    public:
    void info()
    {
        cout<<"Animal\n";
    }

};

class dog : public animal
{
    public:
    void bark()
    {
        cout<<"Dog\n";
    }

};

class cat : public animal
{
    public:
    void meow()
    {
        cout<<"Cat"<<endl;
    }
};

int main()
{
    dog d1;
    cout<<"Dog class: "<<endl;
    d1.info();
    d1.bark();

    cat c1;

    cout<<"Cat class: "<<endl;

    c1.info();
    c1.meow();
    return 0;
}