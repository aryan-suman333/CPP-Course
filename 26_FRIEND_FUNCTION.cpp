#include<iostream>

using namespace std;

class complex
{
	private:
		int a,b;
	public:
		void setNum(int n1, int n2){
    		a = n1;
    		b = n2;     
		}               /* sumcomplex ab complex ka frnd bn gya h to private 
						   data access kr skta h prr sumcomplex class ka func
						   nhi h abhi bhi mtlb m c1 ya c2.sumcomplex nhi likh skta */
		friend complex sumcomplex(complex o1, complex o2); 
		void printNum(void){
			cout<<"Your no. is "<<a<<" + "<<b<<"i"<<endl;
		}
};

complex sumcomplex(complex o1, complex o2){
	complex o3;
	o3.setNum((o1.a + o2.a), (o1.b + o2.b));
	return o3;
}

int main(){

	complex c1, c2, sum;
	c1.setNum(1 , 4);
	c1.printNum();

	c2.setNum(5 , 8);
	c2.printNum();

	sum = sumcomplex(c1, c2);
	sum.printNum();

	return 0; 
}