#include<iostream>
using namespace std;
#define N 1000

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

int majorityElement(int arr[], int size){
    int count=0;
    for(int i=0; i <=size-1; i++){
       if(arr[i]==arr[i+1]){
                count++;
                if(count >= float(size/2))
                    return arr[i];
            }
            else /*if(arr[i]!=arr[i+1])*/
                count =0;

        }
    return 0;
}

int main(){
    int array[N], size, x ;
    cout << "Enter array size:: ";
    cin >> size ;
    cout << "\n Enter array elements :: ";
    for(int i=0;i<size;i++)
        cin >> array[i];
    qSort(array,0,size-1);
    x = majorityElement(array,size);
    if(x==0)
        cout << "No Majority Element!!!";
    else
        cout << "Majority Element is :: " << x ;
    return 0;
}
