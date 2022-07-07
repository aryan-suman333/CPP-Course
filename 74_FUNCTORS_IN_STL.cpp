#include<iostream>
#include <functional>
#include <algorithm>

using namespace std;

int main(){
	
	// FUNCTION OBJECT: function wrapped in a class so that it is available like an obj
	int arr[] = {3, 12, 77, 1, 54, 4};
	// sort(arr, arr + 5);
	// for (int i = 0; i < 6; ++i)
	// {
	// 	cout<<arr[i]<<endl;
	// }

	sort(arr, arr + 5, greater <int>());  // greater int func obj h
	for (int i = 0; i < 6; ++i)
	{
		cout<<arr[i]<<endl;
	}

	return 0;
}