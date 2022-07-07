#include<iostream>

using namespace std;

class employee
{   
	private:
		int id;
		static int count;    // static variable by default 0 se initialize hota h
	public:
		void setData(void){
			cout<<"Enter the id "<<endl;
			cin>>id;
			count++;
		}
		void getData(void){
			cout<<"The id of this employee is "<<id<<" and this is employee no. "
			<<count<<endl;
		}
		static void getCount(void){                     
			cout<<"The value of count is "<<count<<endl;
		}
};

int employee :: count;  // static variable ko ese class k bahar define krna pdta h

int main(){

	employee aryan, shubham, gopal;
	aryan.setData();
	aryan.getData();
	employee :: getCount();   /* static func ko use krne k liye kisi obj ki jarurt ni
	                             pdti, direct class se use kr skte h, static func
	                             sirf dusre static func ya static variable ko hi
	                             use kr skte h uske alawa kuch nii access kr skte */

	shubham.setData();
	shubham.getData();
	employee :: getCount();

	gopal.setData();
	gopal.getData();
	employee :: getCount();

	return 0;
}