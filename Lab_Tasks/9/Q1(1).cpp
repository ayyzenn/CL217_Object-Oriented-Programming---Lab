#include<iostream>                          //Including header files
using namespace std;
class Seminar                                // Class with Seminar name
{
    int time;                               // Class member which is private.
    public:
    Seminar()                               // default constructor             
    {
        time = 30;
        cout << "Seminar starts now" << endl;
    }
    void lecture()                          //function             
    {
        cout << "Lectures in the seminar on" << endl;
    }
    Seminar(int duration)                   // parameterized constructor           
    {
        time = duration;
        cout << "Seminar starts nows" << endl;
    }
    ~Seminar()                             // default destructor
    {
        cout << "Thanks" << endl;
    }
};

int main()
{
    Seminar s1 , s2(50);         // creating object
    return 0;
}




