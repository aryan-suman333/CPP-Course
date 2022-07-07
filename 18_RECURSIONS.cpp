#include<iostream>

using namespace std;

int factorial(int n){
	if (n <= 1)
	{
		return 1;
	}
	return n*factorial(n-1);
}

int fib(int n){
	if (n<2)
	{
		return 1;
	}
    return fib(n-1) + fib(n-2);
}

int main(){

	int a;
	cout<<"Enter a number "<<endl;
	cin>>a;
	cout<<a<<"! is equal to "<<factorial(a)<<endl;

	int b;
    cout<<"Enter a number "<<endl;
	cin>>b;
	cout<<"The term in fibbonacci series at position "<<b<<" is "<<fib(b)<<endl;
	
	return 0;
}