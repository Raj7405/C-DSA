#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main() {
    set<int>s;
    
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(2);

    for(auto i:s){
        cout<<i<<endl;
    }cout<<endl;

    set<int>::iterator it=s.begin();
    it++;
    s.erase(it);
    for(auto i:s){
        cout<<i<<endl;
    }cout<<endl;

    cout<<"5 is present or not? : ";
    //it is use to check wether element is present or not!!!
    cout<<s.count(5)<<endl;

    set<int>::iterator itr=s.find(2);

    cout<<"Set from 2 to end is: "<<endl;
    for(auto it=itr; it!=s.end(); it++){
        cout<<*it<<" ";
    }cout<<endl;

    return 0;
}