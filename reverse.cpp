#include <iostream>
using namespace std;

void reverse(int *arr,int size){ //space complexity=O(1), time complexity O(n)
    int start=0;
    int end= size-1;
    while(start<end){
     swap(arr[start],arr[end]);
     start++;
     end--;
    }
    
}
int main(){
    int arr[]={1,5,7,14,89,788};//788,89,14,7,5,1
    int n= sizeof(arr)/sizeof(arr[0]);
    reverse(arr,n);
    cout<<"reversed array "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
    
}