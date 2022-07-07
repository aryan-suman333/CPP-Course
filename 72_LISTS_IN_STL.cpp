#include <iostream>
#include <list>

using namespace std;

void display(list <int> &l){
	list <int> :: iterator it;
	for (it = l.begin(); it != l.end(); ++it)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
}

int main(){

	list <int> list1;      // list of 0 length

	list1.push_back(5);
	list1.push_back(7);
	list1.push_back(1);
	list1.push_back(9);
	list1.push_back(12);

	// list <int> :: iterator iter = list1.begin();
	// cout<<*iter<<endl;
	// iter++;
	// cout<<*iter<<endl;

	display(list1);
	list1.sort();
	display(list1);
	list1.pop_back();
	display(list1);
	list1.pop_front();
	display(list1);
	list1.remove(9);   // 2 9 honge to dono remove honge
	display(list1);

	list <int> list2(3);   // empty list of size 7
	list <int> :: iterator iter2;
	iter2 = list2.begin();
	*iter2 = 45;
	iter2++;
	*iter2 = 6;
	iter2++;
	*iter2 = 9;

	display(list2);

	list1.merge(list2);
	display(list1);
	list1.reverse();
	display(list1);

	return 0;
}