#include <iostream>
#include <fstream>
using namespace std;
int main() {
	fstream my_file;
//	my_file.open("Hello_C++.txt", ios::out);
//	my_file.open("Hello_C++.ppt", ios::out);
//	my_file.open("Hello_C++.date", ios::out);
	my_file.open("Hello_C++.txt", ios::out);
	if (my_file==false) {
		cout << "File not created!";
	}
	else {
		cout << "File created successfully!";
		my_file.close(); 
	}
	return 0;
}