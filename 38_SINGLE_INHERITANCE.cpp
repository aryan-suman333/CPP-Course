#include<iostream>

using namespace std;

class base
{
	private:
		int data1;
	public:
		int data2;
		void setData();
		int getData1();
		int getData2();
};

void base :: setData(void){
	data1 = 10;
	data2 = 20;
}

int base :: getData1(void){
	return data1;
}

int base :: getData2(void){
	return data2;
}

class derived : public base
{
	private:
		int data3;
	public:
		void process();
		void display();
};

void derived :: process(void){
	data3 = data2 * getData1();
}

void derived :: display(void){
	cout<<"Value of data1 is "<<getData1()<<endl;
	cout<<"Value of data2 is "<<data2<<endl;
	cout<<"Value of data3 is "<<data3<<endl;
}

int main(){

	derived der;
	der.setData();
	der.process();
	der.display();

	return 0;
}