#include<iostream>
using namespace std;
 
int duplicate(int arr[],int n){
    int ans=0;

    for(int i=0; i<n; i++){
        ans=ans^arr[i];
    }

    for(int i=0; i<n; i++){
        ans=ans^i;
    }
    return ans;
}

int main() {
    int arr[7]={1,2,3,4,2,5,6};
    int n=7;

    cout<<duplicate(arr,n)<<endl;


    return 0;
}