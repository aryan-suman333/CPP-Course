#include<iostream>

using namespace std;

class number
{
	private:
		int a;
	public:
		number(){
			a = 0;
		}
		number(int num){
			a = num;
		}
		number(number &obj){ // copy constructor a or z ko copy krk z1 or z2 m dediya
			cout<<"Copy constructor called!!! "<<endl;
			a = obj.a;  // z1 ko x obj ka a or z2 ko z obj ka a pass hogya
		}
		void display(){
			cout<<"The number for this object is "<<a<<endl;
		}
};

int main(){

	number x, y, z(45);
	x.display();
	y.display();
	z.display();

	number z1(x);
	z1.display();

	number z2(z);
	z2.display();

	return 0;
}