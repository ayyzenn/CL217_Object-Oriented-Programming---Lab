#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{

	fstream st; // step 1: Creating object of ofstream class
	st.open("abc.txt",ios::out);   // Step 2: open a file
  
    string ch="ObjectOrientedProgramingLab";
    
    st <<ch;  // Step 4: writing on a file
	
    st.close(); // Step 5: Closing file
    
    return 0;
}
