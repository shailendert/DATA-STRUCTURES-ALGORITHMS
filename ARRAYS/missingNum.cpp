/*In this program we find the missing number in a sequence of numbers 1 to n when we are provided with a list of n-1 integers.No duplicates.*/
#include<iostream>
using namespace std;

int missingNum(int arr[], int size){
    int sum = (size+1)*(size+2)/2;
    for(int i=0; i <=size-1; i++){
        sum = sum - arr[i];
    }
    return sum ;
}

int main(){
    int array[10], size ;
    cout << "\n Enter array size :: ";
    cin >> size ;
    cout << "\n Enter the sequence";
    for(int i=0; i< size; i++)
        cin >> array[i];
    int num = missingNum(array,size);
    cout << "\n The missing number of the sequence is :: " << num ;
    return 0;
}
