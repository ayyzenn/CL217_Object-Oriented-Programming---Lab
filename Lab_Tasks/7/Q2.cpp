#include<iostream>           //Including header files
using namespace std;
class batsman                // Class with batsman name
{
    private:                // Class members which are private.
    int bcode;
    char bname[20];
    int inings, notout, runs;
    int batavg ;
    int calcavg(int inings , int notout , int runs);

    public:                 // Function prototypes and are public.
    void readdata(int b , char n[] , int i , int no , int r );                   // function to get data
    void displaydata();                                                         // function to display data

};
// using a function outside the class with the help of scope resolution operator
void batsman::readdata(int b , char n[] , int i , int no , int r )
{
    int x;
    // Assigning values to the class members 
    bcode = b;
    for (x = 0; x < sizeof(n); x++)
    {
        bname[x] = n[x];
    }

    bname[x] = '\0';
    inings = i;
    notout = no;
    runs = r;
}

int batsman::calcavg(int inings , int notout , int runs)
{
    batavg = runs / (inings - notout);      // calculating batavg


    return batavg;
}
// displaying the values 
void batsman::displaydata()
{
    cout<<"Batsman code is: "<<bcode<<endl;
    cout<<"Batsman name is: "<<bname<<endl;
    cout<<"Inings: "<<inings<<endl;
    cout<<"Not out: "<<notout<<endl;
    cout<<"Runs: "<<runs<<endl;

    cout<<"Batting average: "<<calcavg(inings ,notout ,runs)<<endl;
}

int main()
{
    batsman s;           // creating object

    s.readdata(12 , "Saad", 1134 , 145 , 34);           // passing values
    s.displaydata();
}


