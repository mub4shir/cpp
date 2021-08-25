#include<iostream>
using namespace std;
void p(int n){
	int i = 0;
	int j = 0; 
	while(i < n) {
	        while(j <= i){
	        	cout<<"* ";
			j++;
		}
		j=0;
	i++;
	cout<<endl;		
	}


}
int main() {
int n ;
cin>>n;
p(n);
return(0);



	}