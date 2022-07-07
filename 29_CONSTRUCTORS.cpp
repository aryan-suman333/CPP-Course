#include<iostream>

using namespace std;

class complex
{
	private:
		int a, b;
	public:
		complex(void);  // constructor declaration hamesha public section m hoga
		void printnum(void){
			cout<<"Your no. is "<<a<<" + "<<b<<"i"<<endl;
		}
};

complex :: complex(void){  // this is a default constructor as it takes no arguements
	a = 0;
	b = 0;  // constructor kuch return nhi krta or uske address ko refer nhi kr skte
}

int main(){

	complex c;   /* constructor ek type ka func hota h jiska naam same as class hota
				    h, or jese hi hum us class ka koi object define krte h jese yaha
					c ko kiya to ye func apne aap run ho jaata h, [c.complex() nhi 
					likhna pda] */
	c.printnum();

	return 0;
}