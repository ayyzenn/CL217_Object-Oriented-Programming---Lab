#include<iostream>              // including header files
using namespace std;

class Time                      // class with time name
{
    private:                     // class member which are private
    int hour;
    int minutes;

    public:                          // function prototypes and are public  
    void settime(int , int);         //function to set time
    void showtime();                    // function to display time
    Time time_sum(Time);            // function to calculate sum of time
};

// using function outside the class with the help of scope resolution operator
void Time::settime(int h , int m)
{
    //setting class members
    hour = h;
    minutes = m;
}

void Time::showtime()                   // displaying data
{
    cout<<hour<<":"<<minutes<<endl;
}

Time Time:: time_sum(Time t2)           // calculating the sum of 2 times
{
    Time t4;
    t4.hour  = hour + t2.hour;
    t4.minutes = minutes + t2.minutes;

    return t4;
}

int main()
{
    Time t1 , t2 , t3;              //creating objects


    // passing values
    t1.settime(12 , 30);        
    t2.settime(01 , 20);
    t1.showtime();
    t2.showtime();

    t3 = t1.time_sum(t2);
    t3.showtime();

}
