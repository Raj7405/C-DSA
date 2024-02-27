#include<iostream>
using namespace std;

void PrintArray(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void sort01(int arr[],int n){
         
    int left=0;
    int mid=0;
    int rigth=n-1;
    {
    while (mid <= rigth)    
        if(arr[mid]==0){
            swap(arr[left], arr[mid]);
            left++;
            mid++;
        
        }
        else if(arr[mid]==1){
            mid++;
        }
        else if(arr[mid]==2){
            swap(arr[mid],arr[rigth]);
            
            rigth--;
        }
    }  
    PrintArray(arr,n);   
}
int main() {
    //test case-1
    int arr[7]={0,1,2,0,2,0,1};
    int n=7;

    sort01(arr,n);

    //test case-2

    /*
    int arr2[7]={0,1,2,0,1,2,0};
    sort01(arr2,n);
    */


    return 0;
}

