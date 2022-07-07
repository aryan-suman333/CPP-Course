#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

	// opening using member func open()
	ofstream out;
	out.open("53 THIS POINTER.cpp");
	out<<"This is me "<<endl;
	out<<"This is me, Hello "<<endl;
	out<<"Hello, This is me"<<endl;
	out.close();

	ifstream in;
	string st, st2;
	in.open("53 THIS POINTER.cpp");
	// in>>st>>st2;
	// cout<<st<<st2;

	while (in.eof()==0)
	{
		getline(in, st);
		cout<<st<<endl;
	}
	in.close();

	return 0;
}