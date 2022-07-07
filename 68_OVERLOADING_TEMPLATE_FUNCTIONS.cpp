#include<iostream>

using namespace std;

template <class T>
class Aryan
{
	public:
		T data;
		Aryan(T a){
			data = a;
		}
		void display(void);
};

template <class T>
void Aryan<T> :: display(void){
	cout<<data<<endl;
}

void func(int a){
	cout<<"I am first func() "<<a<<endl;
}

template <class T>
void func(T a){
	cout<<"I am templatized func() "<<a<<endl;
}

int main(){

	// Aryan <int> h(5);
	// cout<<h.data<<endl;
	// Aryan <float> g(5.7);
	// g.display();

	func(4);  // exact match waale func ko priority milti h
	func('c');
	return 0;
}