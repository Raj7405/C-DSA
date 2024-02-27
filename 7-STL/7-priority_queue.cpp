#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main() {
    //default priority queue is maximum heap 
    priority_queue<int> maxi;

    //minimum heap (priority queue) 
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(0);
    maxi.push(2);

    cout<<"the size of maxi PQ is--> ";
    cout<<maxi.size()<<endl;

    int n=maxi.size();
    cout<<"The maxi PQ is: "<<endl;
    for(int i=0; i<n; i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;

    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);

    int m=mini.size();
    cout<<"The mini PQ is: "<<endl;
    for(int i=0; i<m; i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;

    cout<<"is mini is empty?: ";
    cout<<mini.empty()<<endl;
 
    return 0;
}