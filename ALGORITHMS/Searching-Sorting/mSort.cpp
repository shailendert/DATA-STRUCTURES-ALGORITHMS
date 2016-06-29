#include<iostream>
using namespace std;

void merge(int arr[], int l, int m, int r){
    int i,j,k;
    int n1 = m-l+1;
    int n2 = r-m ;
    int L[n1], R[n2];

    for(i=0; i<n1 ; i++)
        L[i] = arr[l+i];
    for(j=0; j<n2; j++)
        R[j] = arr[m+1+j];
    i=0; j=0; k=l;
    while(i<n1&& j<n2){
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=R[j];
            j++;
        }
        k++;
    }

    while(i<n1){
        arr[k]=L[i];
        i++; k++;
    }

    while(j<n2){
        arr[k]=R[j];
        j++; k++;
    }
}

void mSort(int arr[], int l, int r){
    int m;
    if(l < r){
        m = (l+r)/2;
        mSort(arr,l,m);
        mSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}

int main(){
    int arr[]={10,32,15,64,32,68,86,17};
    int n=8;
    cout<<"ARRAY BEFORE...";
    for(int i=0; i<n; i++){
        cout<< arr[i] << "\t";
    }
    mSort(arr,0,7);
    cout<<"ARRAY After Sorting...";
    for(int i=0; i<n; i++){
        cout<< arr[i] << "\t";
    }
}
