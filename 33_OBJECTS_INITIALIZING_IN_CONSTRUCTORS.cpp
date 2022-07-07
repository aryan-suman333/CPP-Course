#include<iostream>

using namespace std;

class bankDeposit
{
	private:
		int principal;
		int years;
		float interestRate;
		float returnValue;
	public:
		bankDeposit(){};  
		bankDeposit(int p, int y, float ir);  // if ir is in points like 0.04
		bankDeposit(int p, int y, int ir);    // if ir is in percent like 4
		void show();
};

bankDeposit :: bankDeposit(int p, int y, float ir){
	principal = p;
	years = y;
	interestRate = ir;
	returnValue = principal;
	for (int i = 0; i < y; i++)
	{
		returnValue = returnValue*(1+interestRate);
	}
}

bankDeposit :: bankDeposit(int p, int y, int ir){
	principal = p;
	years = y;
	interestRate = float(ir)/100;
	returnValue = principal;
	for (int i = 0; i < y; i++)
	{
		returnValue = returnValue*(1+interestRate);
	}
}

void bankDeposit :: show(){
	cout<<endl<<"Principal amount was "<<principal<<endl
	    <<"Return value after "<<years<<" years is "
	    <<returnValue<<endl;
}

int main(){

	bankDeposit bd1, bd2, bd3;
	int p, y;
	float ir;
	int IR;

	cout<<"Enter the value of p, y and ir"<<endl;
	cin>>p>>y>>ir;

	bd1 = bankDeposit(p, y, ir);
	bd1.show();

	cout<<"Enter the value of p, y and IR"<<endl;
	cin>>p>>y>>IR;

	bd2 = bankDeposit(p, y, IR);
	bd2.show();

	bd3.show();
	
	return 0;
}