#include<iostream>
using namespace std;

int nSetBits(int n){
    int ans=0;
    int count=0;
    for(int i=1; i<=n; i++){
        int a=i;
        while(a!=0){
            if(a&1){
                count++;
            }
            a=a>>1;
         }
    }
    return count;
} 

int main() {
    int a,b,n;
    cout<<"enter the number n:"<<endl;
    cin>>n;
    //cin>>a>>b;

    cout<<"No. of Set Bits from 1 to n is:"<<nSetBits(n)<<endl;
    //cout<<"No. of Set Bits in b are:"<<nSetBits(b)<<endl;

    //int total_set_bits=nSetBits(a)+nSetBits(b);
    //cout<<"Total No. of Set Bits in a & b are:"<< total_set_bits<<endl;

    return 0;
}