#include<iostream>
using namespace std;
 
void printARR(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
} 
void sort01(int arr[],int n){
    for(int i=0; i<n; i++){
        if(i+1==n)
          break;
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
        
    }
    printARR(arr,n);
} 
int main() {
    int arr[6]={0,1,1,0,0,1};
    int n=6;
    sort01(arr,n);

    return 0;
}