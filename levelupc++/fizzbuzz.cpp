#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> fizzbuzz(int n){
	vector<string> result;
	for(int i=1;i<=n;i++){
		if(i%15==0)
			result.push_back("FizzBuzz");
		else if(i%5==0)
			result.push_back("Buzz");
		else if(i%3==0)
			result.push_back("Fizz");
		else
			result.push_back(to_string(i));
		}
	
	return result;
	}

int main() {
	
	vector<string> output = fizzbuzz(30);
	for(string x : output)
		cout<<x<<",";



}