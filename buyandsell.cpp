#include <iostream>
using namespace std;
#include <climits>
int buyandsell(int *sell,int n){  //each day is a selling day
int buy[n]={INT_MAX};
for (int i = 1; i < n; i++)
{
   buy[i]=min(buy[i-1],sell[i-1]);
}

int profit=0;

for (int i = 0; i < n; i++)
{
   int current= sell[i]-buy[i];
   profit=max(current,profit);

}
return profit;


}
int main(){
int arr[]={7,1,5,3,6,4};
cout<<buyandsell(arr,6);

}