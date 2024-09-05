#include <iostream>
using namespace std;

int binarySearch(int *arr,int size,int target){ //time complexity O(logn)
    int start=0;
    int end= size-1;
    while(start<=end){
        int mid= (start+end)/2;
        if(target==arr[mid]){
            return mid;
        }
        else if(arr[mid]<target){
            start= start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
   
}
int main(){
    int arr[]={1,5,7,14,89,788};//sorted array
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<"element find at index: "<<binarySearch(arr,n,89);
}