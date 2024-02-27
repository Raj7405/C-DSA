#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main() {
    queue<string>q;
    q.push("Rajendra");
    q.push("Mohan");
    q.push("Chaudhari");

    cout<<"the first element of queue is--> ";
    cout<<q.front()<<endl;

    q.pop();
    cout<<"the first element of queue after pop is--> ";
    cout<<q.front()<<endl;

    cout<<"the size of queue is--> ";
    cout<<q.size()<<endl;

    return 0;
}