#include<iostream>               // including header files
using namespace std;

class report                    // class with report name
{
    private:                    // class member which are private

    int adno;
    char name[20];
    float marks[5];
    float average;
    float getavg()              // private function to calculate average
    {
        float sum = 0;
        for (int i = 0; i < 5; i++)
        {
            sum +=marks[i];
        }

        return sum / 5;
        
    }

    public:                     // function prototype and are public

    void readinfo(int , char[] , float[]);           //function to set data
    void displayinfo();                             // function to display data

};

// using function outside the class with the help of scope resolution operator
void report::readinfo(int an , char n[] , float m[])
{
    //setting class members
    adno = an;

    for( int i = 0 ; i < 20 ; i++ )
    {
        name[i] = n[i];
    }

    for (int j = 0 ; j < 5 ; j++)
    {
        marks[j] = m[j];
    }

    average = getavg();
    
}


void report::displayinfo()                       // displaying data
{
    cout<<"Addmision number: "<<adno<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Marks:";
    for (int s = 0; s < 5; s++)
    {
        cout<<marks[s]<<"  ";
    }
    cout<<endl;
    cout<<"Average: "<<average<<endl;
}

int main()
{
    report r;                //creating object
    float test[5];
    cout<<"Enter the marks of 5 subjects"<<endl;
    for (int i = 0; i < 5; i++)                         // taking marks from the user
    {
        cin>>test[i];
    }
    
    r.readinfo(12 , "Saad", test );                 // passing values
    r.displayinfo();
}