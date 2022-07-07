#include<iostream>

using namespace std;

int c = 45;  // this c is global variable

int main(){
   
    //********************BUILD IN DATA TYPES***************************

    int a, b, c;

    cout<<"Enter the value of a"<<endl;
    cin>>a;

    cout<<"Enter the value of b"<<endl;
    cin>>b;  

    c= a + b;  // this c is local variable, priority: local > global

    cout<<"The sum is "<<c<<endl;

    cout<<"The global c is "<<::c<<endl;  // :: is scope resolution operation- 
                                          // -ye nhi lgate to is c ka output 45 nhi aata
   
    //********************FLOAT,DOUBLE,LONG DOUBLE LITERALS***************************
   
    float d=34.4f;         // f or F mtlb float h agar f nhi lgate to compiler 34.4 ko double-
                           // -(not long double) consider krta
    long double e=34.4l;   // l or L ka mtlb long double h

    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;

    // upar ki 5 line k output se l, f, double ka fark pta chal jaega 


    cout<<"The value of d is "<<d<<endl;
    cout<<"The value of e is "<<e;
    return 0;
}