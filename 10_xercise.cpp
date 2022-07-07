#include<iostream>

using namespace std;

int main(){

	int i=1;
	do
	{
		cout<<i<<"*6= "<<i*6<<endl;
		i++;
	}while(i<11);

    int j=1;
	while(j<11)
	{
		cout<<j<<"*6= "<<j*6<<endl;
		j++;
	}

	for (int k = 1; k < 11; ++k)
	{
		cout<<k<<"*6= "<<k*6<<endl;
		
	}

	return 0;
}