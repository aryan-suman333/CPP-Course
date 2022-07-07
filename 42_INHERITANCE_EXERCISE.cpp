#include<iostream>
#include <cmath>

using namespace std;

class simpleCalculator
{
	protected:
		int a;
		int b;
	public:
		void setData1(int x, int y){
			a = x;
			b = y;
		}
		void displayadd(void){
			cout<<"The sum of these numbers is "<<a + b<<endl;
		}
		void displaysub(void){
			cout<<"The difference of these numbers is "<<a - b<<endl;
		}
		void displaymultiply(void){
			cout<<"The multiplication of these numbers is "<<a * b<<endl;
		}
		void displaydivide(void){
			cout<<"The division of these numbers is "<<a / b<<endl;
		}
};

class scientificCalculator
{
	protected:
		int c;
		int d;
	public:
		void setData2(int x, int y){
			c = x;
			d = y;
		}
		void displaysin(void){
			cout<<"The sum of sin of these numbers is "<<sin(c)+ sin(d)<<endl;
		}
		void displaycos(void){
			cout<<"The sum of cos of these numbers is "<<cos(c) + cos(d)<<endl;
		}
		void displaytan(void){
			cout<<"The sum of tan of these numbers is "<<tan(c) + tan(d)<<endl;
		}
		void displaylog(void){
			cout<<"The sum of log of these numbers is "<<log(c) + log(d)<<endl;
		}
};

class hybridCalculator : public simpleCalculator, public scientificCalculator
{

};

int main(){

	hybridCalculator aryan;
	aryan.setData1(6 , 3);
	aryan.setData2(60 , 30);

	aryan.displayadd();
	aryan.displaysub();
	aryan.displaymultiply();
	aryan.displaydivide();
	aryan.displaysin();
	aryan.displaycos();
	aryan.displaytan();
	aryan.displaylog();

	return 0;
}