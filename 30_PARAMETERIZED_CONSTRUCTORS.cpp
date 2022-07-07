#include<iostream>
#include <cmath>

using namespace std;

class complex
{
	private:
		int a, b;
	public:
		complex(int , int);
		void printnum(void){
			cout<<"Your no. is "<<a<<" + "<<b<<"i"<<endl;
		}
};

complex :: complex(int x, int y){  // this is a parameterized constructor as it takes
                                   // arguements(parameters)
	a = x;
	b =  y;
}

class point
{
	private:
		int x1, y1;
	public:
		point(int m, int n){
			x1 = m;
			y1 = n;
		}
		void displayPoint(void){
			cout<<"The point is ("<<x1<<" , "<<y1<<")"<<endl;
		}
		friend void distance(point o1, point o2);
};

void distance(point o1, point o2){
	int d = (o2.x1 - o1.x1)*(o2.x1 - o1.x1) + (o2.y1 - o1.y1)*(o2.y1 - o1.y1);
	cout<<"The distance between p and q is "<<sqrt(d)<<endl;
}

int main(){

	complex a(4 , 6);  // implicit call 
	a.printnum();

	complex b = complex(4 , 6);  // explicit call 
	b.printnum();

	// implicit or explicit call dono likhne k tareeke h alag alag prr output same h

	point p(1,1);
	p.displayPoint();

	point q(4,6);
	q.displayPoint();

	distance(p , q);

	return 0;
}