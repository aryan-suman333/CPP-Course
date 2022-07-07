#include<iostream>

using namespace std;

class complex
{
	private:
		int a;
		int b;
	public:
		void setData(int v1, int v2){
			a = v1;
			b = v2;
		}
		void setDataBySum(complex o1, complex o2){  // complex classname h
			a = o1.a + o2.a;                        // o1 o2 usme objects h
			b = o1.b + o2.b;
		}
		void printnum(){
			cout<<"Your complex no. is "<<a<<" + "<<b<<"i"<<endl;
		}
};

class employee
{
	private:
		int id;
		int salary;
	public:
		void setId(void){
			salary = 122;
			cout<<"Enter the id of employee"<<endl;
			cin>>id;
		}
		void getId(void){
			cout<<"The id of this employee is "<<id<<endl;
		}
};

int main(){

	employee company[4];
	for (int i = 0; i < 4; ++i)
	 {
         company[i].setId();
         company[i].getId();
	 }

	 complex c1, c2, c3;
	 c1.setData(1 , 2);
	 c1.printnum();

 	 c2.setData(3 , 4);
 	 c2.printnum();

 	 c3.setDataBySum( c1, c2);
 	 c3.printnum();

	return 0;
}