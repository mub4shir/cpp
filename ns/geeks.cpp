#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main() 
{   
    int t;
 cin>>t;
 int i,j,k=0,temp=0;
 string str;
 while(t--)
 {   
     k=0;
     cin>>str;
     temp=str.length();
     int i=0;
     do
     {
         cout<<str<<endl;
         str[i]='.';
         i++;
     }while(i<temp);
 }
 return 0;

}
