#include <iostream>
using namespace std;
#include <algorithm>
bool checkduplicate(int *arr,int n){
    sort(arr,arr+n);
    for (int i = 1; i < n; i++)
    {
       if (arr[i-1]==arr[i])
       {
        return true;
       }
       
    }
    return false;
}
int main(){
int arr[]={1,2,3,4};
cout<<checkduplicate(arr,10);
}