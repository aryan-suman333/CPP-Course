#include <iostream>
#include <fstream>

using namespace std;


/* The classes useful for working with files in C++ are:
1. fsterambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase 

In order to work with files in C++, you will have to open it. Primarily there are 2 ways
to open a file: 
1. using a constructor
2. using the member func open() of the class */

int main(){

	string st1 = "Harry bhai";
	string st2;

	// opening file using constructor and writing in it
	ofstream out("53 THIS POINTER.cpp");
	out<<st1;

	// opening file using constructor and reading it
	ifstream in("53 THIS POINTER.cpp");
	// in>>st2;
	getline(in, st2);
	getline(in, st2);
	cout<<st2;

	return 0;
}