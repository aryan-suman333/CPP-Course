#include <iostream>

using namespace std;

int main(){

    int age;

    cout<<"Tell me your age"<<endl;
    cin>>age;

    switch(age)
    {
    case 18:
    	cout<<"You are 18"<<endl;
    	break;                    // yaha break nhi hoga to niche waala bhi print hoga-
                                  // -jab tak break nhi aaega (agar age 18 h to)
    case 22:
        cout<<"You are 22"<<endl;
        break;                    // age 22 h or break nhi h kahi bhi to 18 ko chhod k-
                                  // -sab kuch print hoga (w/o break \run kr k dekh skte)
    case 2:
    	cout<<"You are 2"<<endl;
    	break;

    default:
        cout<<"No special cases"<<endl;
        break;

    }
	return 0;
}