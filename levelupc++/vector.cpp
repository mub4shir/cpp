#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<int> arr = {1,2,10,12,15};
	//Fill Constructor
	//vector<int> arr(10,7);
	vector<int> visited(100,0);
	//pop_back
	arr.pop_back();
	//push_back
	arr.push_back(16);
	arr.push_back(100);
	//size of vector (no of elements)
	cout<<"size: "<<arr.size()<<"\n";
	//capacity of a vector
	cout<<"capacity: "<<arr.capacity()<<"\n";
	//print all the elements
	//for(int i=0;i<arr.size();i++)
	//	cout<<arr[i]<<"\n";
	for(int x : arr){
		cout<<x<<",";
	}


return 0;
}