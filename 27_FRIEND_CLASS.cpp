#include<iostream>

using namespace std;

class complex;  // declaration as calculator m iska use kiya h

class calculator
{
	public:
		int add(int a, int b){
			return a + b;
		}
		int sumRealComplex(complex, complex);
		int sumCompComplex(complex, complex); 
};      /* sumrealcomplex ya sumcompcomplex ko yaha define nhi kr skte as
  		    complex class k a ya b kbaare m compiler ko abhi nhi pta */

class complex
{
	private:
		int a,b;
		// friend int calculator :: sumRealComplex(complex o1, complex o2);
		// friend int calculator :: sumCompComplex(complex o1, complex o2);
		// ek ek func ko frnd bnane se acha puri class ko hi frnd bnado
		friend class calculator;
	public:
		void setNum(int n1, int n2){
    		a = n1;
    		b = n2;     
		}
		void printNum(void){
			cout<<"Your no. is "<<a<<" + "<<b<<"i"<<endl;
		}
};

int calculator :: sumRealComplex(complex o1, complex o2){
	return (o1.a + o2.a);
}

int calculator :: sumCompComplex(complex o1, complex o2){
	return (o1.b + o2.b);
}

int main(){

	complex o1, o2;
	o1.setNum(1 , 4);
	o2.setNum(5 , 7);

	calculator calc;
	int result1 = calc.sumRealComplex(o1, o2);
	cout<<"The sum of real part of o1 and o2 is "<<result1<<endl;
	int result2 = calc.sumCompComplex(o1, o2);
	cout<<"The sum of complex part of o1 and o2 is "<<result2<<endl;

	return 0;
}