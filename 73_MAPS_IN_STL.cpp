#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){

	map <string, int> marksMap;
	marksMap["Aryan"] = 98;
	marksMap["Shubham"] = 59;
	marksMap["Gopal"] = 2;

	marksMap.insert({{"Yogesh", 75}, {"Khushvinder", 40}});

	map <string, int> :: iterator iter;
	for (iter = marksMap.begin(); iter != marksMap.end(); ++iter)
	{
		cout<<(*iter).first<<" "<<(*iter).second<<endl;
	}

	cout<<"The size is "<<marksMap.size()<<endl;
	cout<<"The max size is "<<marksMap.max_size()<<endl;
	cout<<"The empty's return value is "<<marksMap.empty()<<endl; // false as not empty
	
	return 0;
}