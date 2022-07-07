#include<iostream>

using namespace std;

class base
{
	public:
		int var_base;
		virtual void display(void){
			cout<<"Displaying base class variable var_base "<<var_base<<endl;
		}
};

class derived : public base
{
    public:
        int var_derived;
		void display(void){
			cout<<"Displaying base class variable var_base "<<var_base<<endl;
			cout<<"Displaying derived class variable var_derived "<<var_derived<<endl;
		}
};

int main(){
	
	base obj_base;
	derived obj_derived;
	base* base_class_pointer;

	base_class_pointer = &obj_derived;
	base_class_pointer->display();     /* derived waala display run hoga as base waale
										  display ko humne virtual bna diya h */

	return 0;
}