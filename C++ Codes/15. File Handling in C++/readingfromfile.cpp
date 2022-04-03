#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
	string ch;
	fstream st; // step 1: Creating object of ifstream class
	st.open("abc.txt",ios::in);   // Step 2: open a file
    
    st >>ch;  // Step 4: Reading from a file
    st.close(); // Step 5: Closing file
    
	cout<<ch<<endl; //Print on console
    return 0;
}
