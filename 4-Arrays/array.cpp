#include<iostream>
using namespace std;
 
int main() {
    int size;
    cout<<"Enter the size of array:"<<endl;
    cin>>size;
    
    int arr[size]={0};
    
    int count=1;
    for(int i=0; i<size; i++){
        arr[i]=count;
        cout<<arr[i]<<" ";
        count++;
    }
    cout<<endl;
    cout<<arr[4];
  return 0;
}