#include<iostream>
#include <fstream>

using namespace std;

int main(){

	ofstream aryanout("53 THIS POINTER.cpp");
	string name;
	cout<<"Enter your name "<<endl;
	cin>>name;

	aryanout<<"My name is "<<name;
	aryanout.close();

	ifstream aryanin("53 THIS POINTER.cpp");
	string content;
	aryanin>>content;
	cout<<"The content of this file is: "<<content<<endl;
	aryanin.close();

	return 0;
}