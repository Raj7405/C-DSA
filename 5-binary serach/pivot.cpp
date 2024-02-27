#include<iostream>
using namespace std;
 
int findpivot(int arr[], int n){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int leftsum=0;
    int rigthsum=0;
    int sub=leftsum-rigthsum; 
    while(sub!=0){  
        for(int i=0; i<mid; i++){
            leftsum=leftsum+arr[i];
        }
        for(int i=mid+1; i<n; i++){
            rigthsum=rigthsum+arr[i];
        }
        if(leftsum==rigthsum){
            return mid;
        }
        else if(leftsum<rigthsum){
            mid+1;
        }
        else if(leftsum>rigthsum){
            mid-1;
        }
    }
    return -1;
    
} 
int main() {
    int arr[6]={1,7,3,6,5,6};
    int n=6;
     
    cout<<findpivot(arr,n);


    return 0;
}