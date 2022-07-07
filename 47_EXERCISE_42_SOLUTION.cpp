#include<iostream>
#include <cmath>

using namespace std;

class simpleCalculator
{
	private:
		int a, b;
	public:
		void getData1(){
			cout<<"Enter the value of a "<<endl;
			cin>>a;
			cout<<"Enter the value of b "<<endl;
			cin>>b;
		}
		void performOperations1(){
			cout<<"The value of a + b is "<<a + b<<endl;
			cout<<"The value of a - b is "<<a - b<<endl;
			cout<<"The value of a * b is "<<a * b<<endl;
			cout<<"The value of a / b is "<<a / b<<endl;
		}
};

class scientificCalculator
{
	private:
		int c, d;
	public:
		void getData2(){
			cout<<"Enter the value of c "<<endl;
			cin>>c;
			cout<<"Enter the value of d "<<endl;
			cin>>d;
		}
		void performOperations2(){
			cout<<"The sum of sin of these numbers is "<<sin(c)+ sin(d)<<endl;
			cout<<"The sum of cos of these numbers is "<<cos(c) + cos(d)<<endl;
			cout<<"The sum of tan of these numbers is "<<tan(c) + tan(d)<<endl;
			cout<<"The sum of log of these numbers is "<<log(c) + log(d)<<endl;
		}

};

class hybridCalculator : public simpleCalculator, public scientificCalculator
{

};

int main(){
	
	hybridCalculator aryan;
	aryan.getData1();
	aryan.performOperations1();
	aryan.getData2();
	aryan.performOperations2();

	return 0;
}