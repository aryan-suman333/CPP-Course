#include<iostream>
#include <string>

using namespace std;

class binary
{   private:                // by default class m sab private hota h
	    string s;  
        void chk_bin(void);
    public:
		void read(void);
		void ones_compliment(void);
		void display(void);
};

void binary :: read(void){
	cout<<"Enter a binary number"<<endl;
	cin>>s;
}

void binary :: chk_bin(void){            // s. waali chize string headerfile ki h
	for (int i = 0; i < s.length(); i++)
	{
		if(s.at(i) != '0' && s.at(i) != '1'){
			cout<<"Incorrect binary format"<<endl;
			exit(0);                     // exit mtlb program se bahar nikl jao
		}
	}
}

void binary :: ones_compliment(void){
    chk_bin();                                 // nesting (func m func use krna)
    for (int i = 0; i < s.length(); i++)
	{
		if(s.at(i) == '0'){
			 s.at(i) = '1';     
	    }
        else{
			 s.at(i) = '0';     
	    }
	}
}

void binary :: display(void){
	chk_bin();                                 // nesting (func m func use krna)
	cout<<"Displaying your binary no. "<<endl;
    for (int i = 0; i < s.length(); i++)
	{
		cout<<s.at(i);
    }
    cout<<endl;
}

int main(){

	binary b;
	b.read();
	b.display();
	b.ones_compliment();
	b.display();

	return 0;
}