#include<iostream>

using namespace std;

class complex
{
	private:
		int a, b;
	public:
		complex(int x, int y){
			a =x;
			b =y;
		}

		complex(int x){
			a =x;
			b = 0;
		}
		
		complex(){
			a = 0;
			b = 0;
		}

		void printnum(void){
			cout<<"Your no. is "<<a<<" + "<<b<<"i"<<endl;
		}
};

int main(){

	complex c1(4 , 6);
	c1.printnum();

	complex c2(5);
	c2.printnum();

	complex c3;
	c3.printnum();

	return 0;
}