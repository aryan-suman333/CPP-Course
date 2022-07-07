#include<iostream>

using namespace std;

class base1
{
	public:
		void greet(){
			cout<<"How are you? "<<endl;
		}
};

class base2
{
	public:
		void greet(){
			cout<<"Kaise ho? "<<endl;
		}
};

class derived : public base1, public base2
{
 	private:
 		int a;
 	public:
 		void greet(){
 			base1::greet();
 		}
};

class B
{
	public:
		void say(){
			cout<<"Hello world "<<endl;
		}
};

class D : public B
{
	private:
		int a;
	public:
		void say(){
			cout<<"Hello my beautiful people "<<endl;
		}
};

int main(){

	// AMBIGUITY 1
	base1 obj1;
	obj1.greet();

	base2 obj2;
	obj2.greet();

	derived der;
	der.greet();

	// AMBIGUITY 2
	B b;
	b.say();

	D d;
	d.say();  // if D m say nhi hota to ye B k say ko run krta

	return 0;
}