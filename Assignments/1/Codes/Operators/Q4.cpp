#include<iostream>
using namespace std;
int main()
{
    string name_1;
    float a,b,c,d,e,f,g,h,o_marks,percentage;
    const float t_marks=800;
    cout<<"Enter your name: ";
    getline(cin,name_1);
    cout<<"Enter your Applied Physics marks: ";
    cin>>a;
    cout<<"Enter your Calculus marks: ";
    cin>>b;
    cout<<"Enter your English marks: ";
    cin>>c;
    cout<<"Enter your English-Lab marks: ";
    cin>>d;
    cout<<"Enter your ICT-Lab marks: ";
    cin>>e;
    cout<<"Enter your Pakistan Studies marks: ";
    cin>>f;
    cout<<"Enter your Programming marks: ";
    cin>>g;
    cout<<"Enter your Programming-Lab marks: ";
    cin>>h;
    cout<<"------------------------------------------------------"<<endl;
    cout<<"Your marks in Applied Physics are "<<a<<endl;

    cout<<"Your marks in Calculus are "<<b<<endl;

    cout<<"Your marks in Enlish are "<<c<<endl;

    cout<<"Your marks in English-Lab are "<<d<<endl;

    cout<<"Your marks in ICT-Lab are "<<e<<endl;

    cout<<"Your marks in Pakistan Studies are "<<f<<endl;
    
    cout<<"Your marks in Programming are "<<g<<endl;

    cout<<"Your marks in Programming-Lab are "<<h<<endl;
    cout<<"------------------------------------------------------"<<endl;
    o_marks = a+b+c+d+e+f+g+h;
    percentage = (o_marks/t_marks)*100;
    cout<<name_1<<endl;
    cout<<"You obtained "<<o_marks <<" out of "<<t_marks<<" \nand your percentage is "<<percentage<<"%"<<endl;
    cout<<"------------------------------------------------------"<<endl;
    return 0;
}