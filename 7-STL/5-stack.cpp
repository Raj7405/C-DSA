#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main() {
    stack<string>s;

    s.push("Rajendra");
    s.push("Mohan");
    s.push("Chaudhari");

    cout<<"item at the top of stack is--> ";
    cout<<s.top()<<endl;
 
    s.pop();
    cout<<"item at the top of stack after pop is--> ";
    cout<<s.top()<<endl;    

    cout<<"size of stack after pop--> ";
    cout<<s.size()<<endl;

    cout<<"is stack is empty--> ";
    cout<<s.empty()<<endl;
    return 0;
}