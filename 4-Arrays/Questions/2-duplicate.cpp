#include<iostream>
#include<algorithm>
using namespace std;
 
void duplicate(int arr[], int n){
    sort(arr,arr+n);
    for(int i=0; i<n; i++){
        if(i+1==n){
            break;
        }
        if(arr[i]==arr[i+1]){
            cout<<arr[i]<<" ";
            arr[i+1]=-1;
            i+2;
        }       
    }
} 
int main() {
    int arr[8]={4,3,2,7,8,2,3,1};
    int n=8;

    duplicate(arr,n);


    return 0;
}