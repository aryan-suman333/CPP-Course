#include<iostream>

using namespace std;

class base1
{
	private:
		int data1;
	public:
		base1(int i){
			data1 = i;
			cout<<"base1 class constructor called "<<endl;
		}
		void printData1(void){
			cout<<"The value of data1 is "<<data1<<endl;
		}
};

class base2
{
	private:
		int data2;
	public:
		base2(int i){
			data2 = i;
			cout<<"base2 class constructor called "<<endl;
		}
		void printData2(void){
			cout<<"The value of data2 is "<<data2<<endl;
		}
};

class derived : public base1, public base2  // yaha jo base class pehle likhenge 
                                            // uska constructor pehle run hoga
{
	private:
		int derived1, derived2;
	public:
		derived(int a, int b, int c, int d) : base1(a) , base2(b){
			derived1 = c;
			derived2 = d;
			cout<<"derived class constructor called "<<endl;
		}
		void printData(void){
			cout<<"The value of derived1 is "<<derived1<<endl;
			cout<<"The value of derived2 is "<<derived2<<endl;
		}
};

int main(){
	
	derived aryan(1, 2, 3, 4);
	aryan.printData1();
	aryan.printData2();
	aryan.printData();
	
	return 0;
}