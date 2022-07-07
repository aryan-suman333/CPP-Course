#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    int a =34;
    char c ='c';  // char m apostrophe lgate h

    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of c is "<<c<<endl;

    a=45;
    c ='4';
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of c is "<<c<<endl;

    //********************CONSTANTS IN C++***************************

    const int b=3;
    cout<<"The value of b is "<<b<<endl;

    // b=4;  
    // cout<<"The value of b is "<<b<<endl;  
    // this will show error as b 3 hi rhega as usko constant variable bnaya h

    //********************MANIPULATORS***************************
    // 1. endl
    // 2. setw

    int x=3, y=45, z=6789;

    cout<<"The value of x without setw is "<<x<<endl;
    cout<<"The value of y without setw is "<<y<<endl;
    cout<<"The value of z without setw is "<<z<<endl;
    
    cout<<"The value of x is "<<setw(4)<<x<<endl;
    cout<<"The value of y is "<<setw(4)<<y<<endl;
    cout<<"The value of z is "<<setw(4)<<z<<endl;

    //********************OPERATORS PRECEDENCE AND ASSOCIATIVITY***************************
    // https://en.cppreference.com/w/cpp/language/operator_precedence ---- (i)

    int m=9 ,n=7;

    int o= m*5+n;  // o=(m*5)+n ese solve hoega according to (i)
    cout<<o;

    o= m*5+n-45+87;  // o=((((m*5)+n)-45)+87) ese solve hoega according to (i)
    cout<<o;

    return 0;
}