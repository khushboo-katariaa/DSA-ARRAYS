#include <iostream>
using namespace std;
#include <climits>
int maxsum1(int *arr,int n){  //brute force algo [time complexity = o(n^3)]
    int maxfinal=INT_MIN;
    for (int i = 0; i < n; i++)
    {
       for (int j = i; j < n; j++)
       
       {int currentsum=0;
        for (int k = i; k <= j; k++)
        {
            currentsum+= arr[k];
            maxfinal= max(currentsum,maxfinal);
        }
      
        
       }
      
       
    }
   return maxfinal; 
}
int maxsum2(int *arr,int n){  //brute force algo [time complexity = o(n^2)]
    int maxfinal=INT_MIN;
    for (int i = 0; i < n; i++)
    {  int currentsum=0;
       for (int j = i; j < n; j++)
       
       {
        
            currentsum+= arr[j];
            maxfinal= max(currentsum,maxfinal);
        
      
        
       }
      
       
    }
   return maxfinal; 
}
int maxsum3(int *arr,int n){  //kadane's algorithm 
 int currentsum=0;
 int finalmax=INT_MIN;
 for (int i = 0; i < n; i++)
 {
    currentsum+=arr[i];
    finalmax=max(currentsum,finalmax);
    if(finalmax<0){
        currentsum=0;
    }
 }
 return finalmax;

}
int main(){
int arr[]={1,2,3,4,5};
cout<<maxsum1(arr,5);
cout<<maxsum2(arr,5);
cout<<maxsum3(arr,5);
}