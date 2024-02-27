#include<iostream>
using namespace std;
void printARR(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
} 

void insertion(int arr[], int n) {
    for(int i=0; i<=n-1; i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
    printARR(arr,n);
}
int main() {
    int arr[7]={10,1,7,4,8,2,11};
    int n=7;

    insertion(arr,n);

    return 0;
}