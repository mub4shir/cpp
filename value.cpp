#include<iostream>
using namespace std;
void func(int *z);

void func(int *z) {
	 *z =100;
}
int main() {

int var = 20;
func(&var);
cout<<var;


}       