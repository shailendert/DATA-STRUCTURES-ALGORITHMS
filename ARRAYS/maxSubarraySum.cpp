/*This program needs to be optimised to give correct answer if all the elements are negative...else it works fine.*/
#include<iostream>
#define N 100
using namespace std;

int maxSubarraySum(int array[], int size){
    int max_so_far = 0;
    int max_ending_here = 0;
    for(int i=0; i <= size-1; i++){
        max_ending_here += array[i];
        if(max_ending_here < 0)
            max_ending_here = 0;
        else if(max_so_far < max_ending_here)
            max_so_far = max_ending_here;
    }
    return max_so_far;
}

int main(){
    int array[N] = {-2,-3,4,5,-6,8,7} ;
    int size = 7 ;
    int sum = maxSubarraySum(array,size);
    cout << "Maximum contiguous subarray sum is :: " << sum ;
    return 0;
}
