#include<iostream>
using namespace std;

int one_sCom(int n){
    if(n==0)
        return 1;
    int m=n;
    int mask=0;
    while(n!=0){
        mask=(mask<<1)|1;
        m=m>>1;
    }
    int ans=(~n)&mask;
    return ans;
} 
int main() {
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    cout<<"the 1's cpmplementr is: "<<one_sCom(n)<<endl;

    return 0;
}