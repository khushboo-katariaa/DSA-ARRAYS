#include <iostream>
using namespace std;
int main(){
    //creating an array
// method1 :
    int array1[5]={4,6,3,2,5};

//method 2: 
    int arr3[]={4,2,4,3} ;//will create array of size 4
//method 3:
    // int array5[4]; //create array of garbage value
    
    // accessing elements through index
    cout<<"element at index 5"<<array1[4]<<endl;

    //user input arrays

    int arr[7];
    for(int i=0;i<7;i++){
        cout<<"enter elements of array"<<endl;
        cin>> arr[i];
    }

    //output of array

    for(int i=0;i<7;i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;

    //determing size of array

    int n= sizeof(arr3)/sizeof(arr3[0]);
    cout<<"size of array"<<n<<endl;
}