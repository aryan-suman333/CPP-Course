#include<iostream>

using namespace std;

int main(){
  	//********************POINTER********************
    // pointer is a data type which holds the address of other data types

    int a=3;
    int* b= &a;  /* b ek pointer variable h or ye a ka address hold
                    krta h ,pointer variable bnane k liye star(int*) lgaya h */

    // & --> (address of) operator
    cout<<"The address of a is "<<b<<endl;
    cout<<"The address of a is "<<&a<<endl;  // dono line ka meaning same h

    // * --> value at or dereference operator
    cout<<"The value at address b is "<<*b<<endl; /* is line ka output 3 aaega kyoki 
	                                                 a = 3 h, b jo h vo a ka 
	                                                 h or us address p value 3 h */

    // pointer to pointer mtlb ek esa pointer jo pointer k address ko store krta h
    int** c = &b;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl; /* *c mtlb b ki value jese *b mtlb 
                                                      a ki value thi */

    cout<<"The value at address (value at address c) is "<<**c<<endl;
    /* **c mtlb a as *c mtlb b h or *b mtlb a h, isliye iska ans 3 aaega */
    

	  return 0;
}