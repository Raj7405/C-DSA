#include<iostream>
using namespace std;
 
int ARterm(int n, int a, int d){
    int ans=(a+((n-1)*d));
    return ans;
}

int main() {
    int n , a , d;
    cout<<"Enter the number which term you want:"<<endl;
    cin>>n;
    cout<<"Enter intial term of AR:"<<endl;
    cin>>a;
    cout<<"Enter comman difference:"<<endl;
    cin>>d;

    cout<<n<<"th term is "<<ARterm(n,a,d)<<endl;


    return 0;
}