#include<iostream>
#define N 100
using namespace std;

int getOddOccurrence(int arr[], int size){
    int res = 0;
    for(int i=0; i <= size-1; i++)
        res = res ^ arr[i];
    return res;
}

int main(){
    int arr[N], size=0;
    cin >> size;
    for(int i=0; i<=size-1; i++)
        cin >> arr[i];
    int x =getOddOccurrence(arr,size);
    cout << "Odd occurring number is :: " << x;
}
