#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main() {
    array<int,4> a={1,2,3,4};
    int size=a.size();
    //to acces element from array
    cout<<"Element at 3--> "<<a.at(3)<<endl;    

    for(int i=0; i<size; i++){
        cout<<a.at(i)<<" ";
    }cout<<endl;

    cout<<"Is the array empty?? --> ";
    //to check wether array is empty!!
    cout<<a.empty()<<endl;
    
    cout<<"the first element inside of array--> ";
    //to get first element inside array
    cout<<a.front()<<endl;

    cout<<"the last element inside of array--> ";
    //to get last element inside array
    cout<<a.back()<<endl;  
    return 0;
}