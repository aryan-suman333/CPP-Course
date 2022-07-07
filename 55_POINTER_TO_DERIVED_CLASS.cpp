#include<iostream>

using namespace std;

class base
{
	public:
		int var_base;
		void display(void){
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

	base* base_class_pointer;
	base obj_base;
	derived obj_derived;
	base_class_pointer = &obj_derived;  /* base class ka pointer derived class k obj ko
	                                       point kr skta h */
	base_class_pointer->var_base = 34;  /* iska mtlb base_class_pointer.var_base = 34 h
	                                       mtlb humne base class ka ek obj bnaya 
	                                       base_class_pointer or uske liye int var_base
	                                       ki value ko 34 kr diya */
	base_class_pointer->display();      /* yaha p display func base class ka hi run hoga
	                                       as pointer(or obj) base class ka h */

	/* base_class_pointer->var_derived = 34; ye error dega as humara obj base class ka h
	   or base class m var_derived naam ka koi variable nhi h */

	derived* derived_class_pointer;
	derived_class_pointer = &obj_derived;
	derived_class_pointer->var_base = 22;  // ye kr skte h as var_base inherit hoke aaya
	derived_class_pointer->var_derived = 98;
	derived_class_pointer->display();

	return 0;
}