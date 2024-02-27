#include<iostream>
using namespace std;

int insertValue(int arr[], int size){
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
} 

bool LinearSearch(int arr[], int size, int key){

    for(int i=0; i<size; i++){
        if(key==(arr[i])){
            return 1;
        }
    }
    return 0;
} 

int main() {
    int size;
    cout<<"Enter the size of array you want:"<<endl;
    cin>>size;

    int arr[size];
    insertValue(arr,size);
    
    int key;
    cout << "Enter the key: "<<endl;
    cin>>key;
    
    if(LinearSearch(arr,size,key)){
        cout << "Key is present in array!!!"<<endl;
    }
    else{
        cout<<"Key is absent in array."<<endl;
    }


    return 0;
}