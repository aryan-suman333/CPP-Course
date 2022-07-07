#include<iostream>

using namespace std;

class student
{
	protected:
 		int rollNumber;
	public:
		void setRollNum(int);
		void getRollNum(void);
};

void student :: setRollNum(int r){
	rollNumber = r;
}

void student :: getRollNum(void){
	cout<<"The roll no. is "<<rollNumber<<endl;
}

class exam : public student
{
	protected:
		float maths;
		float physics;
	public:
		void setMarks(float, float);
		void getMarks(void);
};

void exam :: setMarks(float m1, float m2){
	maths = m1;
	physics = m2;
}

void exam :: getMarks(void){
	cout<<"The marks obtained in maths are "<<maths<<endl;
	cout<<"The marks obtained in physics are "<<physics<<endl;
}

class result : public exam
{
	private:
		float percentage;
	public:
		void display(){
			getRollNum();
			getMarks();
			cout<<"Your percentage is "<<((maths + physics)/2)<<"%"<<endl;
		}
};

int main(){

	result aryan;
	aryan.setRollNum(420);
	aryan.setMarks(94.0 , 100.0);
	aryan.display();

	return 0;
}