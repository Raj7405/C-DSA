#include<iostream>
using namespace std;
void PrintArray(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
} 
void intersection(int arr1[],int arr2[], int n, int m){
    for(int i=0; i<n; i++){
        int element=arr1[i];
        for(int j=0; j<m; j++){
            if(arr1[i]<arr2[j]){
                continue;
            }
            else if(element==arr2[j]){
                cout<<arr1[i]<<" ";
                arr2[j]=INT32_MIN;
                break; 
            }
        }
    }
    cout<<endl;
} 

int main() {
    int n=6;
    int A[n]={1,2,2,2,3,4};
    
    int m=5;
    int B[m]={2,2,3,3};

    intersection(A,B,n,m);
    int x=10;
    int C[x]={2,2,3,4,5,5,6,8,10,10};
    
    int y=5;
    int D[y]={6,6,8,9,10};
    intersection(C,D,x,y);
    return 0;
}