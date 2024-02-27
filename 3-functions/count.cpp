#include<iostream>
using namespace std;
 
int count(int n){

    for(int i=1; i<=n; i++){
        cout << i << " ";
    } 
}

int main() {
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;

    count(n);


    return 0;
}