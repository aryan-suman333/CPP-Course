#include<iostream>

using namespace std;

class student
{
	protected:
		int roll_no;
	public:
		void setRollno(int a){
			roll_no = a;
		}
		void printnum(void){
			cout<<"Your roll no. is "<<roll_no<<endl;
		}
};

class test : virtual public student
{
	protected:
		float maths, physics;
	public:
		void setMarks(float m1, float m2){
			maths = m1;
			physics = m2;
		}
		void printMarks(void){
			cout<<"You result is here: "<<endl
			    <<"Maths "<<maths<<endl
			    <<"Physics "<<physics<<endl;
		}
};

class sports : virtual public student
{
	protected:
		float score;
	public:
		void setScore(float sc){
			score = sc;
		}
		void printScore(void){
			cout<<"Your PT score is "<<score<<endl;
		}
};

class result : public test, public sports
{
	private:
		float total;
	public:
		void display(void){
			total = maths + physics + score;
			printnum();
			printMarks();
			printScore();
			cout<<"Your total score is "<<total<<endl;
		}
};

int main(){
	
	result aryan;
	aryan.setRollno(4200);
	aryan.setMarks(88.9 , 95.5);
	aryan.setScore(70);
	aryan.display();

	return 0;
}