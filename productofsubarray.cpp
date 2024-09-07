#include <iostream>
using namespace std;
#include <climits>
int maxsum3(int *nums,int n){  
    int left =1;
    int right=1;
    int ans=nums[0];
    for(int i= 0;i<n;i++){
        if(left==0){
            left=1;
        }
        if(right==0){
            right=1;
        }
        left=left*nums[i];
        right*=nums[(n-1)-i];
        ans= max(ans,max(left,right));
    }
    return ans;
}

int main(){
int nums[]={2,-5,-2,-4,3};

cout<<maxsum3(nums,5);
}