#include <iostream>
#include <vector>

using namespace std;

template <class T>
void display(vector<T> &v){
	for (int i = 0; i < v.size(); ++i)
	{
		cout<<v[i]<<" ";
		// cout<<v.at(i)<<" ";
	}
	cout<<endl;
}

int main(){

	int element, size;
	vector <int>vec1;   // zero lenght integer vector
	cout<<"Enter the size of your vector "<<endl;
	cin>>size;

	for (int i = 0; i < size; ++i)
	{
		cout<<"Enter an element to add to this vector "<<endl;
		cin>>element;
		vec1.push_back(element);
	}
	display(vec1);

	vec1.pop_back();
	display(vec1);

	vector <int> :: iterator iter = vec1.begin();  // syntax to create iterator
	vec1.insert(iter, 566);
	display(vec1);

	vec1.insert(iter + 1, 566);
	display(vec1);

	vec1.insert(iter + 1, 4, 566);
	display(vec1);
	
	vector <char>vec2(4);     // 4 element character vector
	vector <char>vec3(vec2);  // 4 element character vector from vec2
	vector <int>vec4(4, 13);  // 4 element vector of 13s

	vec2.push_back('5');
	display(vec2);
	display(vec3);
	display(vec4);

	cout<<vec4.size()<<endl;
	return 0;
}