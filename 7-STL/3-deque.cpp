#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main() {
    deque<int>d;
    //insert element from back
    d.push_back(1);
    d.push_back(2);
    
    //insert element form front
    d.push_front(3);
    d.push_front(4);

    int n=d.size();
    for(int i=0; i<n; i++){
        cout<<d.at(i)<<" ";
    }cout<<endl;

    //to erase the deque
    d.erase(d.begin(),d.begin()+1);

    cout<<"the deque after erase is empty or not? --> ";
    cout<<d.empty()<<endl;
    n=d.size();
    for(int i=0; i<n; i++){
        cout<<d.at(i)<<" ";
    }cout<<endl;
    //to erase entire  deque
    d.erase(d.begin(),d.begin()+n);

    cout<<"the deque after erase is empty or not? --> ";
    cout<<d.empty()<<endl;


    return 0;
}