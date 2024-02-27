#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main() {
    vector<int>v; //Or vector<int> v(size of vector, element );
    
    cout<<"The capacity of current vector is--> ";
    //to check how much capacity is of vector!!1
    cout<<v.capacity()<<endl;

    //to insert element in vector
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);
    v.push_back(7);
    int n=v.size();
    for(int i=0; i<n; i++){
        cout<<v.at(i)<<" ";
    }cout<<endl;

    cout<<"the element at 1 is--> "<<v.at(1)<<endl;
    cout<<v.capacity()<<endl;
 
    //to remove element from vector!!
    v.pop_back();
    n=v.size();
        for(int i=0; i<n; i++){
        cout<<v.at(i)<<" ";
    }cout<<endl;
    cout<<"after poping element capcity is--> "<<v.capacity()<<endl;
    v.pop_back();
    cout<<"after poping element size is--> "<<v.size()<<endl;
    
    //to copy entire vector in another vector
    vector<int>new_v(v);
    int m=new_v.size();
    cout<<"The new copy vector new_v as follow: "<<endl;
    for(int i=0; i<m; i++){
        cout<<new_v.at(i)<<" ";
    }cout<<endl;
 
    //to clear entire vector
    v.clear();
    n=v.size();
    cout<<"after clearing vector size of vector v is--> "<<n<<endl;
    return 0;
}