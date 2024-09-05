#include <iostream>
using namespace std;
int linearSearch(int *arr,int size,int target){//time complexity O(n)
    for(int i=0;i<size;i++){
        if(target==arr[i]){
            return i;
        }
    }
    return -1;
    
}
int main(){
    int arr[]={7,3,7,3,1,8,2,9};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<"element find at index: "<<linearSearch(arr,n,2);
}