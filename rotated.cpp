#include <iostream>
using namespace std;
int SearchFromRotatedArray(int *arr,int size,int target){
    int low=0;
    int high=size-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(target==arr[mid]){
            return mid;
        }
        else if(arr[mid]>arr[low]){
            if(target>=arr[low] && target<arr[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(target<=arr[high] && target>arr[mid]){
                
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }

    }
    return -1;


}
int main(){
int arr[]={4,5,6,7,0,1,2};
cout<<SearchFromRotatedArray(arr,7,3);

}