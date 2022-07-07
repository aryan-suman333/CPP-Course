#include<iostream>

using namespace std;

// FUNCTION PROTOTYPE
// type function name(arguements);
int sum(int a,int b);              /* function prototyping m bss function ka naam
                                      likh dete h, function baad m declare krte h
                                      is se hum function ko use kr skte h jese main
                                      m sum ko use kiya h, bhale hi humne sum baad 
                                      m declare kiya ho ya phir sum ko pehle hi
                                      declare krdo to ye sb ki jrurt ni */
void g();

int main(){
	int num1, num2;
	cout<<"Enter the 1st no."<<endl;
	cin>>num1;
	cout<<"Enter the 2nd no."<<endl;
	cin>>num2;

	cout<<"The sum is "<<sum(num1, num2)<<endl; 
	// sum function niche upar define kr diya
	g();
	return 0;
}

int sum(int a,int b){
	int c = a+b;
	return c;
	// a or b formal parameters h and num1 or num2 actual parameters h
}
void g(){
	cout<<"Hello, Good Morning"<<endl; // void h isliye return krne ki jrurat nii
}
