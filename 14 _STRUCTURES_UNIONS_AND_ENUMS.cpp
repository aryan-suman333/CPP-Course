#include<iostream>

using namespace std;

//********************STRUCTURES********************
typedef struct employee
{
	int Id;
	char favchar;
	float salary;
} ep;                /* typedef se hum struct employee ko ep likh skte h, shortform
                        create krne k liye h, struct se koi lena dena nhi h */

//********************UNIONS********************
union money
{
    int rice;
    char car;
    float pounds;
};                  /* isme or struct m bss memory management ka fark h or teeno m
                      se ek time p bss ek use krna h */

int main(){
	ep aryan;
	struct employee shubham; // ep bhi likh skte ya struct employee bhi
	ep yogesh;

	aryan.Id = 2;
	aryan.favchar = 'i';
	aryan.salary = 5000000;

	cout<<"The Id of aryan is "<<aryan.Id<<endl;
	cout<<"The favchar of aryan is "<<aryan.favchar<<endl;
    cout<<"The salary of aryan is "<<aryan.salary<<endl;

    union money m1;

    m1.rice = 34; // yaha iske niche m1.car = 'c' bhi likhdu to phir glt output aaega
	cout<<m1.rice<<endl;

	//********************ENUMS********************
	enum meal
	{ breakfast, lunch ,dinner};
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;

    meal q = breakfast;  /* meal khud ab ek data type bn gya h, similarly employee or
                            money bhi */
    cout<<q<<endl;

	return 0;
}