#include<iostream>

using namespace std;

int main(){
    //********************ARRAYS********************

    /* array m jo list hogi vo same data types ki honi chahiye while struct, unions,
     enums different data types store kr skte */

	 int engmarks[4] = {23, 45, 56, 89};

	 cout<<"These are engmarks"<<endl;
	 cout<<engmarks[0]<<endl;
	 cout<<engmarks[1]<<endl;
	 cout<<engmarks[2]<<endl;
	 cout<<engmarks[3]<<endl;

	 int mathmarks[4] = {32, 54, 65, 98};
    mathmarks[2] = 34;         // arrays m value change bhi kr skte

    cout<<"These are mathmarks"<<endl;
	 cout<<mathmarks[0]<<endl;
	 cout<<mathmarks[1]<<endl;
	 cout<<mathmarks[2]<<endl;
	 cout<<mathmarks[3]<<endl;

	 for (int i = 0; i < 4; ++i)
	 {
		 cout<<"The value of engmarks "<<i<<" is "<<engmarks[i]<<endl;
	 }

    int j = 0;
    while(j<4)
    {
        cout<<"The value of mathmarks "<<j<<" is "<<mathmarks[j]<<endl;
        j++;
    }

    /* images related
      1. ek integer 4 bytes leta h
      2. c++ m ginti 0 se start hoti h 
      3. arrays ki location k liye & ka use nhi krte mtlb agar m &engmarks likhunga
         to vo glt hoga direct engmarks hi likhna h
      4. suppose ek pointer h p jo mathmarks(array) ka address store kr rha h, to jab
         m p++ krunga to vo us array k andar next address p pahuch jaega mtlb *p =32
         hoga phir *p+1 = 54 phir *p+2 = 34 hoga */

    //********************POINTER ARITHMETIC********************

    int* p= mathmarks;
    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl;

    cout<<*(p++)<<endl;
    cout<<*p<<endl;
    cout<<*(++p)<<endl;

	 return 0;
}