#include<iostream>
using namespace std;

void swap(int* x, int* y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void selSort(int arr[], int size){
    for(int i=0; i<size; i++){
        int min =i ;
        for(int j=i+1; j<size; j++){
            if(arr[j] < arr[min])
                min=j;
        }
        swap(&arr[min],&arr[i]);
    }
}

int main(){
    int arr[] = {13,33,31,24,65,32};
    int size = 6 ;
    cout<<"\n Array Before Sorting..!!!";
    for(int k=0; k<size; k++)
        cout<<arr[k]<<"\t";
    selSort(arr,size);
        cout<<"\n Array After Sorting..!!!";
    for(int k=0; k<size; k++)
        cout<<arr[k]<<"\t";
}
