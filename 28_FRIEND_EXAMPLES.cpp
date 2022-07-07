#include<iostream>

using namespace std;

class y; // forward declaration

class x
{
	private:
		int data;
	public:
		void setValue(int value){
			data = value;
		}
		friend void add(x , y);
};

class y
{
	private:
		int num;
	public:
		void setValue(int value){
			num = value;
		}
		friend void add(x , y);
};

void add(x o1, y o2){
	cout<<"Summing data of x and y gives "<<o1.data + o2.num<<endl;
}

class n; // forward declaration

class m
{
	private:
		int val1;
	public:
		void indata(int i){
			val1 = i;
		}
		void display(void){
			cout<<val1<<endl;
		}
		friend void exchange(m& , n&);
};

class n
{
	private:
		int val2;
	public:
		void indata(int i){
			val2 = i;
		}
		void display(void){
			cout<<val2<<endl;
		}
		friend void exchange(m& , n&);
};

void exchange(m &a , n &b){  // swap function
	int temp = a.val1;
	a.val1 = b.val2;
	b.val2 = temp;
}

int main(){

	x a1;
	a1.setValue(3);

	y b1;
	b1.setValue(5);

	add(a1 , b1);

	m o3;
	n o4;

	o3.indata(34);
	o4.indata(67);
	
	exchange(o3 , o4);

	cout<<"The value after exchanging becomes "<<endl;
	o3.display();

	cout<<"The value after exchanging becomes "<<endl;
	o4.display();
	
	return 0;
}