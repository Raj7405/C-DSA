#include<iostream>
using namespace std;
void printARR(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
} 

void selection(int arr[], int n) {
    for(int i=0; i<=n-1; i++){
        int minindex=i; //here we assume that i-th index is minimum!!!
        for(int j=i+1; j<n; j++){
            if(arr[minindex]>arr[j]){
                minindex=j; //here we update minindex with lesser than minindex!!!
            }
        }
        swap(arr[i],arr[minindex]);
    }
    printARR(arr,n);
}
int main() {
    int arr[7]={10,1,7,4,8,2,11};
    int n=7;

 selection(arr,n);

    return 0;
}