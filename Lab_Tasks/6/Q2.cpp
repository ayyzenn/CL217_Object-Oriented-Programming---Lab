#include<iostream>
using namespace std;

struct time1
{
    int hours;
    int minutes;
    int seconds;
    int hours_in_seconds;
    int minutes_in_seconds;
    int t_seconds;

};


int main()
{
    time1 h,m,s;

    cout<<"Enter hours: "<<endl;
    cin>>h.hours;
    cout<<"Enter minutes: "<<endl;
    cin>>m.minutes;
    cout<<"Enter seconds: "<<endl;
    cin>>s.seconds;

    h.hours_in_seconds= h.hours*3600;
    m.minutes_in_seconds = m.minutes*60;
    s.t_seconds = h.hours_in_seconds + m.minutes_in_seconds + s.seconds;

    cout<<"Total number of seconds are: "<<s.t_seconds<<"s"<<endl;

}