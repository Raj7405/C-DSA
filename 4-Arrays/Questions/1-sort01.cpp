#include<iostream>
#include<algorithm>
using namespace std;

void PrintArray(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

 
void Sort01_2(int arr[], int n, int count_0, int count_1){
        for(int i=0; i<=n; i++){
            int steps=i;
            for(int j=i; j<n; j++){
                if(steps<count_0){
                    arr[i]=0;
                }
                else{
                    arr[i]=1;
                }
            }
        
        }    
        PrintArray(arr,n);
}

int main() {
     
    int arr[10]={0,1,1,0,0,1,1,1,0,1};
    int n=10;



    int count_0=0;
    int count_1=0;
    
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            count_0++;
        }
        else{
            count_1++;
        }
    }
    cout<<"Total number of 0 in array are: "<<count_0<<endl;
    cout<<"Total number of 1 in array are: "<<count_1<<endl;

    Sort01_2(arr,n,count_0,count_1);

    //pre-define function for sorting
    /*
    sort(arr ,arr+n);
    PrintArray(arr,n);
    */    

    return 0;
}