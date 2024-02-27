#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main() {
    list<int>l;

    l.push_back(1);
    l.push_front(2);

    int n=l.size();
    for(int i:l){
        cout<<i<<" ";
    } cout<<endl;
    
    l.erase(l.begin());
    cout<<"after the erase"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    list<int>n1(l);
    for(int i:n1){
        cout<<i<<" ";
    }cout<<endl;

    list<int>n2(5,100);
    for(int i:n2){
        cout<<i<<" ";
    }cout<<endl;

    return 0;
}