#include <iostream>
using namespace std;
int trapwater (int * nums,int n){
    int maxleft[n];
    int maxright[n];
    maxleft[0] = nums[0];
    maxright[n-1] = nums[n-1];
    for (int i = 1; i < n; i++)
    {
        maxleft[i]=max(maxleft[i-1],nums[i-1]);
        

    }
    for (int i = n-2; i >= 0; i--)
    {
        maxright[i]=max(maxright[i+1],nums[i+1]);
    }
    
    int trappingwater=0;
    for (int i = 0; i < n; i++)
    {
        int trap=min(maxleft[i],maxright[i])-nums[i];
        if(trap>0){
            trappingwater+=trap;
        }
    }

    return trappingwater;
    
    

}
int main(){
int array[]={5,4,3,2,1};
cout<<trapwater(array,5);
}