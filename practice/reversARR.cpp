#include<iostream>
using namespace std;
void printARR(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" "; 
    }
}

void reversARR(int arr[], int n){
    int start=0, end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    printARR(arr,n);
} 

int main() {
    int arr[]={1,2,3,4,5,6,7};
    int n=7;
    reversARR(arr,n);


    return 0;
}