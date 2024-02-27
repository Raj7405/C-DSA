#include<iostream>
using namespace std;
 
void intersectionByTwoPointer(int arr1[],int n,int arr2[],int m){
    int i=0,j=0;
    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    cout<<endl;
} 
int main() {
    int n=6;
    int A[n]={1,2,2,2,3,4};
    
    int m=5;
    int B[m]={2,2,3,3};

    intersectionByTwoPointer(A,n,B,m);


    int x=10;
    int C[x]={2,2,3,4,5,5,6,8,10,10};
    
    int y=5;
    int D[y]={6,6,8,9,10};

    intersectionByTwoPointer(C,x,D,y);


    return 0;
}