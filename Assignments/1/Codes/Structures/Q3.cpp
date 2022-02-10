#include<iostream>
using namespace std;
struct time1
{
    int hours;
    int minutes;
    int sec;
    int hours_s;
    int minutes_s;
    int t_sec;
};
int main()
{
    time1 t1,t2,t3;
    cout<<"--------------------------------------------"<<endl;
    cout<<"Enter hours of first time: ";
    cin>>t1.hours;
    cout<<"Enter minutes of first time: ";
    cin>>t1.minutes;
    cout<<"Enter seconds of first time: ";
    cin>>t1.sec;
    cout<<"--------------------------------------------"<<endl;
    cout<<"Enter hours of second time: ";
    cin>>t2.hours;
    cout<<"Enter minutes of second time: ";
    cin>>t2.minutes;
    cout<<"Enter seconds of second time: ";
    cin>>t2.sec;
    t1.hours_s= t1.hours*3600;
    t1.minutes_s = t1.minutes*60;
    t1.t_sec = t1.hours_s + t1.minutes_s + t1.sec;
    t2.hours_s= t2.hours*3600;
    t2.minutes_s = t2.minutes*60;
    t2.t_sec = t2.hours_s + t2.minutes_s + t2.sec;
    t3.t_sec = t1.t_sec + t2.t_sec;
    t3.minutes = t3.t_sec/60;
    t3.hours = t3.minutes/60;
    cout<< int(t3.hours)<<"h:"<<int(t3.minutes%60) <<"m:"<<int(t3.t_sec%60)<<"s"<<endl;
    cout<<"--------------------------------------------"<<endl;
}




