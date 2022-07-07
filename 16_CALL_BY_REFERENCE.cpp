#include<iostream>

using namespace std;

void swap(int a, int b){  // temp a  b
	int temp = a;         //   4  4  5
	a = b;                //   4  5  5
	b = temp;             //   4  5  4 
}

// Call by reference using pointers
void swapPointer(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

// Call by reference using C++ reference variables
void swapReferenceVar(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}

int main(){
	int x = 4, y =5;
	cout<<"the value of x and y is "<<x<<" and "<<y<<endl;

	swap(x, y);  /* this won't swap x and y as x or y ki value swap function m jaegi
	                prr x = 4 or y =5 hi rhega (x and y are actual parameters, a and
	                b are formal parameters) */
	cout<<"the value of x and y is "<<x<<" and "<<y<<endl;

	swapPointer(&x, &y);  /* this will swap x and y as a and b pointer h jo x or y ka
	                         address hold krenge ( x ka address y ko chla jaega or 
	                         y ka x ko) */
	cout<<"the value of x and y is "<<x<<" and "<<y<<endl;

	swapReferenceVar(x, y); // this will also swap x and y
	cout<<"the value of x and y is "<<x<<" and "<<y<<endl;

	return 0;
}