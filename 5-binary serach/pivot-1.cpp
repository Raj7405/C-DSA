#include<iostream>
using namespace std;
int findpivot(int arr[], int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;

    }
    return e;
} 

int main() {
    int arr[7]={4,6,7,8,3,4,4};
    int n=7;

    cout<<"the pivot element in array at index no."<<findpivot(arr,n);


    return 0;
}