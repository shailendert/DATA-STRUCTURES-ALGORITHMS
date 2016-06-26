#include<iostream>
# define N 100
using namespace std;

int lSearch(int arr[], int size,int x){
    for(int i=0; i<=size-1; i++){
        if(arr[i]==x)
            return i;
    }
    return -1;
}

int main(){
    int arr[N],size,x;
    cout<<"\n Enter the size of array... ";
    cin>>size;
    cout<<"\n Enter array elements..::";
    for(int i=0; i<=size-1; i++)
        cin>>arr[i];
    cout<<"\n Enter the element to search for...::";
    cin>>x;
    int r = lSearch(arr,size,x);
    if(r==-1)
        cout<<"\n Element not found";
    else
        cout<<"\n Element found at index "<<r;
    return 0;
}
