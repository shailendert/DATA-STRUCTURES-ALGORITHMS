#include<iostream>
using namespace std;

void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int partition(int arr[], int low, int high){
    int pivot = arr[high];  //last element is taken pivot.
    int i = low-1;

    for(int j=low; j<high; j++){
        if(arr[j]<=pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return i+1;
}

void qSort(int arr[], int low, int high){

    if(low < high){
        int p = partition(arr,low,high);
        qSort(arr,low,p-1);
        qSort(arr,p+1,high);
    }
}

void printArray(int arr[],int size){
    for(int i=0; i<size; i++)
        cout << arr[i] << "\t" ;
}

int main(){
    int arr[] = {10,13,12,32,23,16};
    int size = 6 ;
    cout << "\n Array Before Sorting...";
    printArray(arr,size);
    qSort(arr,0,size-1);
    cout << "\n Array after Sorting...";
    printArray(arr,size);

    return 0;
}
