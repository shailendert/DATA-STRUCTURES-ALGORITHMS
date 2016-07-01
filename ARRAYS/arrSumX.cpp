//Given an array A[] and a number x, check for pair in A[] with sum as x.
#include<iostream>
using namespace std;

void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int partition(int arr[],int low,int high){
    int pivot = arr[high];
    int i = low-1;
    for(int j=low; j<=high-1; j++){
        if(arr[j] <= pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return i+1;
}

void qSort(int arr[],int low, int high){

    if(low < high){
        int p = partition(arr,low,high);
        qSort(arr,low,p-1);
        qSort(arr,p+1,high);
    }
}

int hasArrayPair(int arr[],int size,int sum){

    int l=0,r=size-1;

    while(l < r){
        if(arr[l]+arr[r] == sum)
            return 1;
        else if(arr[l]+arr[r] < sum)
            l++;
        else
            r--;
    }
    return 0;
}

int main(){
    int arr[] = {10,12,13,32,29,68,57} ;
    int size = 7,sum;
    qSort(arr,0,size);
    cout << "\n Enter the sum to check..? :: ";
    cin >> sum ;
    int r = hasArrayPair(arr,size,sum);
    if(r==1)
        cout<< "Pair exists";
    else
        cout<< "Pair doesn't exist";

    return 0;
}
