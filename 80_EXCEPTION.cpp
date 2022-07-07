#include<iostream>
#include <exception>
#include <stdexcept>

using namespace std;

int main(){
	
	try{
		int momage = 30, sonage;
		cin>>sonage;
		if(sonage > momage){
			throw 21;            // 21 ki jagah man se koi bhi no. de skte h
		}
	}

	catch(int a){
		cout<<"son can't be older than mom ,ERROR NUMBER: "<<a<<endl;
	}
	catch(bad_alloc& error){  // not enough memory k liye ye use hoga
		cout<<"Not enough memory "<<endl;
	}
	catch(exception& error){  // standard exception k liye ye use hoga
		cout<<"Exception: "<<error.what()<<endl;
	}
	return 0;
}
// runtime_error and invalid_arguement ye kuch standard exception h