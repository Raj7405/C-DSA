#include<iostream>
#include<algorithm>
using namespace std;
 
int main() {
    /*int size;
    cout<<"Enter the size of array:"<<endl;
    cin>>size;*/
    
    int arr[10];
    fill_n(arr, 10 ,05);
    
    for(int i=0; i<10; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
 
  return 0;

}