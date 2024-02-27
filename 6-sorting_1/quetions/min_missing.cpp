#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int getzero(int arr[], int n){
    int s=0,e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==0){
            return mid;
        } 
        else if(arr[mid]<0){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
}

int firstMissing(int arr[], int n)
{
    sort(arr,arr+n);
    int posInd=getzero(arr,n);
    int count=0;
    for(int i=posInd; i<n; i++){
        if(~(arr[i]^count)){
            return arr[i];
            cout<<i<<endl;
            break;
        }
        count=count++;
    }
    return 1;
}
int main() {
    int arr[5]={3,2,-6,1,0};
    int n=5;
    sort(arr,arr+n);
    cout<<getzero(arr,n);
    cout<<firstMissing(arr,n);


    return 0;
}