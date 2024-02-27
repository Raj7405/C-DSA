
#include<iostream>
using namespace std;
int peak(int arr[],int n){
        int i=0;
        int j=i+1;
        int k=n-1;
        int ans1,ans2;
        int peak=0;
        while(i<k){
            if(arr[i]>arr[k]){
                ans1=k;
                k--;
            }
            else if(arr[i]<arr[j]){
                ans2=j;
                j++;
            }
            else if(ans1+1==ans2-1){
                peak=ans1+1;
            }
        }return peak;
} 
int main() {
    int arr[6]={3,4,5,6,2,1};
    int n=6;
    cout<<peak(arr,n);


    return 0;
}