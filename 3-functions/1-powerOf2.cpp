#include<iostream>
using namespace std;
//without using pow() function

int powerOfTwo(int a, int b){
    
    int ans=1;
    for(int i=1; i<=b; i++){
        ans=ans*a;
    }
    return ans;
}

int main() {
    int a,b;
    cout<<"Enter the number a and b:"<<endl;
    cin>>a>>b;

    int answer=powerOfTwo(a,b);
    cout<<"answer is:"<<answer<< endl;
    return 0;
}