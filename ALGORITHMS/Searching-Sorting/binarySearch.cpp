#include<iostream>
#define N 1000
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

int binarySearch(int array[], int l, int r, int ele){
   if (r >= l){
        int mid = l + (r - l)/2;

        // If the element is present at the middle itself
        if (array[mid] == ele)  return mid;

        // If element is smaller than mid, then it can only be present
        // in left subarray
        if (array[mid] > ele) return binarySearch(array, l, mid-1, ele);

        // Else the element can only be present in right subarray
        return binarySearch(array, mid+1, r, ele);
   }

   // We reach here when element is not present in array
   return -1;
}

int main(){
    int array[N], size, ele;
    cout << "\n Enter array size and elements....\n" ;
    cin >> size;
    for(int i=0; i <= size-1; i++){
        cin >> array[i];
    }
    cout << "\n Enter element to search :: " ;
    cin >> ele ;
    qSort(array,0,size-1);
    int index = binarySearch(array,0,size-1,ele) ;
    if(index == -1)
        cout << "\n Element not found..!!!" ;
    else
        cout << "\n Element found at position :: " << index+1 ;
    return 0;
}
