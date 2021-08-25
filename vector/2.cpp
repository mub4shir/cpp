// c++ program to illustrate the 
// capacity function in vectors

#include<iostream>
#include<vector>

using namespace std;

int main() {
	
	vector<int> g1;
	
	for(int i = 1; i<= 100; i++)
		g1.push_back(i);

	cout<<"size : "<< g1.size();
	cout<<"\ncapacity : "<< g1.capacity();
	cout<<"\nmax_size : "<< g1.max_size();

	// resize the vector size to 4
	g1.resize(99);

	//prints the vector size after resize()
	cout<<"\nsize : "<< g1.size();
	
	// checks if the vector is empty or not 
	if(g1.empty() == false)
		cout<<"\nvector is not empty";
	else
		cout<<"\nvector is empty";

	//shrinks the vector 
	g1.shrink_to_fit();
	cout<<"\nvector elements are: ";
	for(auto it = g1.begin(); it != g1.end(); it++)
		cout<< *it << " ";

	return 0; 
}

