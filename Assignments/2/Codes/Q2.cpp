#include<iostream>                   // including header files
using namespace std;

class travel                          // class with travel name
{
    private:                         // class member which are private

    int flight_num;
    string destination;
    float distance;
    float fuel;

    int calfuel()                    // private function to calculate fuel
    {
        if (distance<=1000)
        {
            fuel = 500;
        }
        else if (distance>1000 && distance <=2000)
        {
            fuel = 1100;
        }
        else if (distance >2000)
        {
            fuel = 2200;
        }
    }

    public:                                             // function prototype and are public  
    void feedinfo(int , string , float );               //function to set data
    void showinfo();                                    // function to display data
};

// using function outside the class with the help of scope resolution operator
void travel::feedinfo(int fn , string des , float dist)
{
    //setting class members
    flight_num = fn;
    destination = des;
    distance = dist;
    calfuel();
}

void travel::showinfo()                  // displaying data
{
    cout<<"Flight number: "<<flight_num<<endl;
    cout<<"Destination: "<<destination<<endl;
    cout<<"Distance: "<<distance<<endl;
    cout<<"Fuel: "<<fuel<<endl;
}

int main()
{
    travel t;                               //creating object
    t.feedinfo(1, "Jannat", 300);         // passing values
    t.showinfo();       

    return 0;
}
