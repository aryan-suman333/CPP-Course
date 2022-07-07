#include<iostream>

using namespace std;

class employee  // base class
{
	private:
	public:
		int id;
		float salary;
		employee(){}
		employee(int inpId){
			id = inpId;
			salary = 34.0;
		}
};

// syntax class {{derived classname}} : {{visibility mode}} {{base classname}}

class programmer : public employee{  // by default visibility mode is private
	private:
	public:
		int languageCode;
		void getData(){
			cout<<id<<endl;
		}
		programmer(int inpId){
			id = inpId;
			languageCode = 9;
		}
};

int main(){

	employee aryan(1), shubham(2);
	cout<<aryan.salary<<endl;
	cout<<shubham.salary<<endl;

	programmer skillf(10);
	cout<<skillf.languageCode<<endl;
	cout<<skillf.id<<endl;          // if visibility mode private to yaha error milta
	skillf.getData();

	return 0;
}

/* visibilty mode public then public members of base --> public members of derived
       "      "  private then public members of base --> private members of derived
  private member of base class inherit nhi hote */