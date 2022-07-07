#include<iostream>

using namespace std;

int main(){
	/* There are three types of loops
	 1. For loops
	 2. While loops
	 3. Do-while loops */

	//********************FOR LOOP********************

	/* Syntax of for loop:
	   for(initialization; condition; updation)
	   {
	     loop body(c++ code);
	   } */

	for (int i = 1; i <= 40; ++i)
	{
		cout<<i<<endl;
	}

	// example of infinte for loop
	/*for (int i = 0; 34<40 ; ++i)   condition always true hi h isliye chalta hi jaega,
	                                 run nhi krna h gadabad ho jaegi 
	{
		cout<<i<<endl; 
	} */

	//********************WHILE LOOP********************

	/* Syntax of while loop:
	   while(condition)
	   {
	     c++ statements;
	   } */

    int i=1;
	while(i<=40)
	{
		cout<<i<<endl;
		i++;
	}

	// example of infinte while loop
	/* int i=1
	   while(true)
	   {
		   cout<<i<<endl;
		   i++;
	   } */

	//********************DO-WHILE LOOP********************

	/* Syntax of do-while loop:
	   do
	   {
	     c++ statements;
	   }while(condition); */

	int j=1;
	do
	{
		cout<<j<<endl;
		j++;
	}while(j<=40);  /* isme or while m fark ye h ki ye condition false ho to bhi ek baar
	                   to chalega hi mtlb yaha p 1 likha aaega hi uske baad 2 se 40 tak 
	                   k nhi aaenge*/



	return 0;

}