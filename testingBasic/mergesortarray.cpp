#include<bits/stdc++.h>
using namespace std;


int main(){
	time_t start_time = time(NULL);
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a[] = {1,4,5,7,8};
	int b[] = {2,3,6,9,10,11};
	int n1 = sizeof(a)/sizeof(a[0]);
	int n2 = sizeof(b)/sizeof(b[0]);

	int res[n1+n2]; //= {1,2,3,4,5,6,7,8,9,10,11};

	int a_itr = 0;
	int b_itr = 0;
	int res_itr = 0;
	while(a_itr < n1 && b_itr < n2) {
		if(a[a_itr] <= b[b_itr]){
			res[res_itr] = a[a_itr];
			++a_itr;
			}	
		else{
			res[res_itr]= b[b_itr];
			++b_itr;

			}
		++res_itr;
	}
	while(a_itr < n1){
		res[res_itr] = a[a_itr];
		++res_itr;
		++a_itr; 
	}
	while(b_itr < n2){
		res[res_itr] = b[b_itr];
		++res_itr;
		++b_itr;
	}
	for(int i = 0; i < n1+ n2; i++)
		cout<<res[i]<< " ";
		
	time_t end_time = time(NULL);
	cout<<"\n"<<"Runtime: "<<end_time<<"ms"<<" - "<< start_time<<"ms"<<" = "<<end_time - start_time<<"ms";

	return 0;	
}