#include<iostream>
using namespace std;

void PrintArray(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void sort01(int arr[],int n){

    int left=0, right=n-1;
    while (left<right)
    {
        while(arr[left]==0 && left<right){
            left++;
        
        }
        while(arr[right]==1 && left<right){
            right--;
            
        }
        if(left<right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
    

    PrintArray(arr,n);
}
int main() {
    int arr[10]={0,1,1,0,0,1,1,1,0,1};
    int n=10;

    sort01(arr,n);



    return 0;
}