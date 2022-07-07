#include<iostream>

using namespace std;

class A
{
	private:
		int a;
	public:
		void setData(int a){
			this->a = a;
		}
		void getData(void){
			cout<<"The value of a is "<<a<<endl;
		}
};

int main(){

	A obj;
	obj.setData(4);
	obj.getData();

	return 0;
}