#include <iostream>

using namespace std;

int main(){

	  int a = 4, b = 5;
    cout<<"operators in c++ "<<endl;

    // 1.Arithmetic operators
    cout<<"\nfollowing are arithmetic operators"<<endl;

    cout<<"\nthe value of a + b is "<< a+b;
    cout<<"\nthe value of a - b is "<< a-b;
    cout<<"\nthe value of a * b is "<< a*b;
    cout<<"\nthe value of a / b is "<< a/b;
    cout<<"\nthe value of a % b is "<< a%b;

    cout<<"\nthe value of a ++ is "<< a++;   // iska meaning a print kro or a= a+1 krdo, 
                                             // therefore a=5 ho gya
    cout<<"\nthe value of a -- is "<< a--;   // iska meaning a print kro or a= a-1 krdo, 
                                             // therefore a=4 ho gya as pehle 5 tha
    cout<<"\nthe value of ++ a is "<< ++a;   // iska meaning a= a+1 kro phir a print krdo, 
                                             // therefore a=5 ho gya as pehle 4 tha
    cout<<"\nthe value of -- a is "<< --a<<endl;   // iska meaning a= a-1 kro phir a print krdo, 
                                                  // therefore a=4 ho gya as pehle 5 tha
    
    // 2. Assignment operators
    // int a=3,b=9;
    // char d='d'; 
    //used to assign values to variables
   

    // 3. Comparison operators
    cout<<"\nfollowing are Comparison operators"<<endl;

    cout<<"\nthe value of a == b is "<<(a==b);
    cout<<"\nthe value of a != b is "<<(a!=b);
    cout<<"\nthe value of a > b is "<<(a>b);
    cout<<"\nthe value of a < b is "<<(a<b);
    cout<<"\nthe value of a >= b is "<<(a>=b);
    cout<<"\nthe value of a <= b is "<<(a<=b);
    
    
    // 4. Logical operators
    cout<<"\nfollowing are logical operators"<<endl;

    cout<<"\nthe value of ((a==b) && (a<b)) logical operator is "<<((a==b) && (a<b));
    // && ye 'and' function h

    cout<<"\nthe value of ((a==b) || (a<b)) logical operator is "<<((a==b) || (a<b));
    // || ye 'or' function h
   
    cout<<"\nthe value of (!(a==b)) logical operator is "<<(!(a==b));
    // || ye 'not' function h

    return 0;
}