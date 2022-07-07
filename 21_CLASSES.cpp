#include<iostream>

using namespace std;

class employee
{
    private:
    	int a, b, c;
    public:
    	int d, e;
	    void setData(int a1, int b1, int c1);  // function prototyping
	    void getData(){
	    	cout<<"The value of a is "<<a<<endl;
	    	cout<<"The value of b is "<<b<<endl;
	    	cout<<"The value of c is "<<c<<endl;
	    	cout<<"The value of d is "<<d<<endl;
	    	cout<<"The value of e is "<<e<<endl;
	    }
};

void employee :: setData(int a1, int b1, int c1){
	a=a1;
	b=b1;
	c=c1;
}

int main(){
 
	employee harry;  /* setdata alag se bnaya h or harry.a ya harry.b isliye nhi kiya
	                    as a,b,c private h, direct ese nhi kr skte (error aaega)*/
	harry.d = 34;
	harry.e = 89;
	harry.setData(9, 2, 5);
	harry.getData();

	return 0;
}