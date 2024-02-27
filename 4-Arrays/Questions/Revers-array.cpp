#include<iostream>
using namespace std;

void PrintArray(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
} 

void reverse_array(int arr[], int size){
    int start=0;
    int end=size-1;
    int temp;
    while(start<=end){

        //there is also pore-define function for swaping
        //swap(arr[start],arr[end]);

        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    cout<<"reverse of array is here:"<<endl;
    PrintArray(arr,size);
    
}

int main() {
    int arr1[6]={1,2,3,4,5,6};
    int size1=6;
    reverse_array(arr1,size1);

    int arr2[5]={1,2,3,4,5};
    int size2=5;
    reverse_array(arr2, size2);
    return 0;
}