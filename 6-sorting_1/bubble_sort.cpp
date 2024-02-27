#include<iostream>
using namespace std;
void printARR(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
} 

void bubble(int arr[], int n) {
    for(int i=1; i<n; i++){
        bool swapped=false;
        for(int j=0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false);
            break;
    }
    printARR(arr,n);
}
int main() {
    int arr[7]={10,1,7,4,8,2,11};
    int n=7;

    bubble(arr,n);

    return 0;
}