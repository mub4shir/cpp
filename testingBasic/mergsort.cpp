#include<iostream>
using namespace std;

void mergesort(int a[], int low, int mid, int high){

    int i=low, j=mid+1, k=low,temp[100];

    while(i<=mid && j<=high){
        if(a[i] <= a[j]){
            temp[k] = a[i];
            ++i;
        }
        else{
            temp[k] = a[j];
            ++j;
        }
        ++k;
    }
    while(i<=mid){
        temp[k] = a[i];
        ++i;
        ++k;
    }
    while(j<=high){
        temp[k] = a[j];
        ++j;
        ++k;
    }

    for(int itr=low;itr<k;++itr)
        a[itr] = temp[itr];

  //  delete [] temp;


}

void divideList(int a[], int low, int high){

    if(low < high){
        int mid = (low+high)/2;
        divideList(a,low,mid);
        divideList(a,mid+1,high);
        mergesort(a,low,mid,high);
    }

}

int main(){

    int n;
    cin>>n;
    while(n--){
        int size;
        cin>>size;
        int a[size];
        for(int i=0;i<size;i++)
            cin>>a[i];
            
        divideList(a,0,size-1);

    for(int i=0;i<size;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
    


    return 0;

}