#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact=fact*i;
    }
    return fact;
} 

int nCr(int n, int r){
    int numi=factorial(n);
    int denomi=factorial(r)*factorial(n-r);
    
    return numi/denomi;
} 

int main() {
    int n,r;
    cout<<"Enter the number n:"<<endl;
    cin>>n;
    cout<<"Enter the number r:"<<endl;
    cin>>r;
    int anwser=nCr(n,r);
    cout<<anwser<<endl;
    return 0;
}