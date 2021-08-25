// c++ program to illustrate the 
// modifiers in vector
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
	
	//assign vector
	vector<int> v;
	
	//fill the array with 10 five times
	v.assign(5, 10);
	
	cout<<"the vector elements are: ";
	for(int i = 0; i < v.size(); i++)
		cout<<v[i]<< " ";
	//insert 15 to the last position
	v.push_back(15);
	int n = v.size();
	cout<<"\nthe last element is: "<<v[n - 1];
	//remove last element
	v.pop_back();
	//print the vector 
	cout<<"\nthe vector elements are: ";
	for(int i = 0; i < v.size(); i++)
		cout<<v[i]<<" ";
	//insert 5 at the beginning 
	v.insert(v.begin(), 5);
	cout<<"\nthe first element is: "<<v[0];
	//removes the first element
	v.erase(v.begin());
	cout<<"\nthe first element is: "<<v[0];
	//inserts at the beginning 
	v.emplace(v.begin(), 5);
	cout<<"\nthe first element is: "<<v[0];
	//inserts 20 at then end 
	v.emplace_back(20);
	n = v.size();
	cout<<"\nthe last element is: "<<v[n - 1];
	//erase the vector 
	v.clear();
	cout<<"\nvector size after erase(): "<< v.size();

	// two vectors to perform swap
	vector<int> v1, v2;
	v1.push_back(1);
	v1.push_back(2);
	v2.push_back(3);
	v2.push_back(4);

	cout<<"\n\nvector 1: ";
	for(int i = 0; i < v1.size(); i++)
		cout<<v1[i]<< " ";
	cout<<"\nvector 2: ";
	for(int i = 0; i < v2.size(); i++)
		cout<<v2[i]<<" ";
	//swap v1 and v2
	v1.swap(v2);
	
	cout<<"\nafter swap \nvector 1: ";
	for(int i = 0; i < v1.size(); i++ )
		cout<<v1[i]<<" ";
	cout<<"\nvector 2: ";
	for(int i = 0; i < v2.size(); i++)
		cout<<v2[i]<<" ";	   
}