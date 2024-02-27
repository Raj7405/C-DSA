#include<iostream>
#include<math.h>
using namespace std;

int insertValue(int arr[], int size){
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
} 
int minValue(int arr[],int size){
    int min=INT32_MAX;
    for(int i=0; i<size; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int maxValue(int arr[],int size){
    int max= INT32_MIN;
    for(int i=0; i<size; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}


int main() {
    int size;
    cout<<"Enter the size of array you want:"<<endl;
    cin>>size;

    int arr[size];
    cout<<"The Array is:"<<endl;
    insertValue(arr,size);

    cout<<"The max value in given arrayn is: "<<maxValue(arr,size)<<endl;
    cout<<"The min value in given arrayn is: "<<minValue(arr,size)<<endl;

    //using pre-define function max() and min()
    // max_min_function(arr,size);



    return 0;
}

/*
void max_min_function(int arr[],int size){
    int minimum=INT32_MAX;
    int maximum=INT32_MIN;
    for(int i=0; i,size;i++){
        int minimum = min(minimum, arr[i]);
        int maximum = max(maximum,arr[i]);
    }
   cout<<"The min value in given arrayn is: "<<minimum<<endl;
   cout<<"The max value in given arrayn is: "<<maximum<<endl;
  
}
*/