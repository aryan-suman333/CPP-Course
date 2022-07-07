#include<iostream>

using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class Aryan
{
	public:
		T1 a;
		T2 b;
		T3 c;
		Aryan(T1 x, T2 y, T3 z){
			a = x;
			b = y;
			c = z;
		}
		void display(void){
			cout<<"The value of a is "<<a<<endl;
			cout<<"The value of b is "<<b<<endl;
			cout<<"The value of c is "<<c<<endl;
		}
};

int main(){
	
	Aryan <>h(4, 6.4, 'c');
	h.display();
	Aryan<float, char, char>g(2.4, 'o', 'v');
	g.display();
	
	return 0;
}