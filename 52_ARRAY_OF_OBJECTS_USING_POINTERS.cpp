#include<iostream>

using namespace std;

class shopitem
{
	private:
		int id;
		float price;
	public:
		void setData(int a, float b){
			id = a;
			price = b;
		}
		void getData(void){
			cout<<"Code of this item is "<<id<<endl;
			cout<<"Price of this item is "<<price<<endl;
		}
};

int main(){

	int size = 3;
	int p, i;
	float q;
	shopitem* ptr = new shopitem[size];
	shopitem* ptrtemp = ptr;

	for (i = 0; i < size; ++i)
	{
		cout<<"Enter id and price of item "<<i+1<<endl;
		cin>>p>>q;
		ptr->setData(p, q);
		ptr++;
	}

	for (i = 0; i < size; ++i)
	{
		cout<<"Item number "<<i+1<<endl;
		ptrtemp->getData();
		ptrtemp++;
	}

	return 0;
}