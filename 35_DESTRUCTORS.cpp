#include<iostream>

using namespace std;

int count = 0;

class num
{
	private:
	public:
		num(){
			count++;
			cout<<"This is the time when constructor is called for object no. "
			<<count<<endl;
		}
		~num(){  // destructor
			cout<<"This  is the time when destructor is called for object no. "
			<<count<<endl;
			count--;
		}
};

int main(){

	cout<<"We are inside our main function "<<endl;
	cout<<"Creating 1st object n1 "<<endl;
	num n1;

	{
		cout<<"Entering this block "<<endl;
		cout<<"Creating two more object "<<endl;
		num n2, n3;
		cout<<"Exiting this block "<<endl;
	}
	
	cout<<"Back to main "<<endl;

	return 0;
}