#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
	string ch;
	ifstream st; // step 1: Creating object of ifstream class
	st.open("abc.txt");   // Step 2: open a file
    
    st >>ch;  // Step 4: Reading from a file
    st.close(); // Step 5: Closing file
    
	cout<<ch<<endl; //Print on console
    system("pause");
    return 0;
}
