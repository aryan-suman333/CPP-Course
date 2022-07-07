#include <iostream>

using namespace std;

int main(){
	//********************BREAK********************

	for (int i = 0; i < 5; ++i)
	{
		if (i==3)
			break;

	    cout<<i<<endl;
	}

	//********************CONTINUE********************

    for (int j = 0; j < 5; ++j)
	{
		if (j==3)   // continue m 3 ko chhod k baaki print krega, break m 3 p ruk jaega
			continue;

	    cout<<j<<endl;
	}
	return 0;
}