#include<iostream>
using namespace std;
int max(int arr[], int n){
    int max=INT32_MIN;
    for(int i=0; i<=n-1; i++){
        if(arr[i]>=max){
            max=arr[i];
        }
    }
    return max;
} 
int min(int arr[], int n){
    int min=INT32_MAX;
    for(int i=0; i<=n-1; i++){
        if(arr[i]<=min){
            min=arr[i];
        }
    }
    return min;
} 
int main() {
    int arr[]={4,3,5,9,2,1,3,8};
    int n=8;
    cout<<"Maximum in arr is: "<<max(arr,n)<<endl;
    cout<<"Minimum in arr is: "<<min(arr,n)<<endl
    ;


    return 0;
}