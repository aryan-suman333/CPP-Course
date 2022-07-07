#include<iostream>

using namespace std;

class complex
{
	private:
		int real, imaginary;
	public:
		void setData(int a, int b){
			real = a;
			imaginary = b;
		}
		void getData(){
			cout<<"The real part is "<<real<<endl;
			cout<<"The imaginary part is "<<imaginary<<endl;
		}
};

int main(){

	complex c1;
	complex *ptr = &c1;
	// (*ptr).setData(1 , 54); 
	// (*ptr).getData();       ye or niche waale dono exact same h 
	ptr->setData(1 , 54);
	ptr->getData();

	complex *p = new complex[4]; // ye line 22 and 23 dono line ki jagah ek line
	p->setData(1 , 4);
	p->getData();
	return 0;
}