#include<iostream>
using namespace std;

int nSetBits(int n){
    int count=0;
    while (n!=0)
    {
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    return count;
} 

int main() {
    int a,b;
    cout<<"enter the number a & b:"<<endl;
    cin>>a>>b;

    cout<<"No. of Set Bits in a are:"<<nSetBits(a)<<endl;
    cout<<"No. of Set Bits in b are:"<<nSetBits(b)<<endl;

    int total_set_bits=nSetBits(a)+nSetBits(b);
    cout<<"Total No. of Set Bits in a & b are:"<< total_set_bits<<endl;

    return 0;
}