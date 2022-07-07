#include<iostream>

using namespace std;

class test
{
	private:
		int a;
		int b;
	public:
	    test(int i, int j) : a(i), b(j)
	//  test(int i, int j) : a(i), b(i + j)
	//  test(int i, int j) : a(i), b(2 * j)
	//  test(int i, int j) : a(i), b(a + j)
	//  test(int i, int j) : b(a + j) , a(i)  ye sab bhi kr skte
	/*  test(int i, int j) : b(j) , a(i + b) ye garbage value dega a ki as inta ko pehle
		                                     likha h isliye vo pehle initialise hoga */
		{
			cout<<"Constructor executed "<<endl;
			cout<<"Value of a is "<<a<<endl;
			cout<<"Value of b is "<<b<<endl;
		}
};

int main(){
	test t(4 , 6);
	return 0;
}