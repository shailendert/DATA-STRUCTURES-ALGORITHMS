#include<iostream>
using namespace std;

void swap(int* x, int* y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void bSort(int arr[], int n){
    int i,j;
    for(i=0; i<=n-1; i++){
        for(j=0; j<n-1-i; j++){
            if(arr[j] > arr[j+1])
                swap(&arr[j],&arr[j+1]);
        }
    }
}

int main(){
    int arr[] ={10,31,12,16,8};
    int n=5;
    cout<<"Array Before Sorting..!!!";
    for(int k=0; k<n; k++)
        cout<<arr[k]<<"\t";
    bSort(arr,n);
        cout<<"\n Array After Sorting..!!!";
    for(int k=0; k<n; k++)
        cout<<arr[k]<<"\t";
}
