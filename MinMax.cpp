#include <iostream>
using namespace std;

int FindMax(int *arr,int size){
    int max=arr[0];
    for(int i =0;i<size;i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }
    return max;

}
int FindMin(int *arr,int size){
    int min=arr[0];
    for(int i =0;i<size;i++){
        if (arr[i]<min){
            min=arr[i];
        }
    }
    return min;

}
int main(){
    int arr[5]={4,3,6,3,7};
    int maximum =FindMax(arr,5);
    int minimum =FindMin(arr,5);
    cout<<"the maximum element of the array is "<<maximum<<endl;
    cout<<"the minimum element of the array is "<<minimum<<endl;



    return 0;
}