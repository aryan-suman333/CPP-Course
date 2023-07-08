#include<iostream>

using namespace std;

int main(){

    //********************REFERENCE VARIABLES***************************
    // aryan=suman

    float x=455;
    float & y=x;  // y yaha p reference variable h-
                  // -& use krte h reference variable k liye

    cout<<x<<endl;
    cout<<y<<endl;

    //********************TYPECASTING***************************
    
    int a=45;
    float b=45.46;

    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of a is "<<float(a)<<endl;

    cout<<"The value of b is "<<(int)b<<endl;
    cout<<"The value of b is "<<int(b)<<endl;  // dono line ka mtlb same h

    int c=int(b);

    cout<<"The value of expression a + b is "<<a + b<<endl;
    cout<<"The value of expression a + int(b) is "<<a + int(b)<<endl;
    cout<<"The value of expression a + (int)b is "<<a + (int)b<<endl;
    cout<<"The value of expression a + c is "<<a + c<<endl;

    return 0;
}
