#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
    ofstream st; // step 1: Creating object of ofstream class
    st.open("abc.txt");   // Step 2: open a file
    string ch="ObjectOrientedProgramingLab";
    st <<ch;  // Step 4: writing on a file
    st.close(); // Step 5: Closing file
    system("pause");
    return 0;
}
