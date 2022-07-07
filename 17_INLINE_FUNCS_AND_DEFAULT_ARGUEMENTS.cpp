#include<iostream>

using namespace std;

//********************INLINE FUNCTIONS********************
inline int prod(int a, int b){  /* jab function chota ho or jyada use hora ho to usko
                                   inline bnado, is se time bachega compiling ka */
	return a*b;
}

int product(int a, int b){
    static int c = 0;       /* starting m c=0 rehga next time jab ye run hoega tab
                               c=1 ho jaega or ese hi bdhta jaega(check outputs) */
    c = c + 1; 
	return a*b+c;
}

//********************DEFAULT ARGUEMENT********************
float moneyreceived(int currentmoney, float factor = 1.04){  
	return currentmoney*factor;  /* 1.04 is default arugement, default arugement ko
	              				    hamesha baad m likhna h (jese yaha currentmoney 
	              				    pehle h or factor baad m) */
}

int main(){

	int x, y;
    cout<<"Enter the value of x and y "<<endl;
    cin>>x>>y;

    cout<<"The product of x and y is "<<prod(x, y)<<endl;    // output = 12
    cout<<"The product of x and y is "<<product(x, y)<<endl; // output = 13
    cout<<"The product of x and y is "<<product(x, y)<<endl; // output = 14

    int money = 100000;
    cout<<"If you have "<<money<<" Rs then you will receive "<<moneyreceived(money)<<
    " Rs after 1 year"<<endl;

    cout<<"For VIP: If you have "<<money<<" Rs then you will receive "
    <<moneyreceived(money, 1.10)<<" Rs after 1 year"<<endl;


	return 0;
}