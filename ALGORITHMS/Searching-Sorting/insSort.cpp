#include<iostream>
using namespace std;

void swap(int* x, int* y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void insSort(int arr[], int size){
    for(int i=0; i<size; i++){
        for(int j=i;j > 0;j--){
            if(arr[j] < arr[j-1]){
                swap(&arr[j],&arr[j-1]);
            }
        }
    }
}

int main(){
    int arr[] = {34,8,64,51,21,32};
    int size = 6 ;
    cout<<"\n Array Before Sorting...";
    for(int k=0; k<size; k++)
        cout<<arr[k]<<"\t";
    insSort(arr,size);
        cout<<"\n Array After Sorting...\t";
    for(int k=0; k<size; k++)
        cout<<arr[k]<<"\t";
}

