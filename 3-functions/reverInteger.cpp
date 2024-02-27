#include<iostream>
using namespace std;
int reverseInt(int n){
     int ans=0;
     while(n!=0){
        int digit = n%10;
        /*for overflow of ineteger
        if(ans>INT32_MAX/10 || ans<INT32_MAX/10){
            return 0;
        }*/
        ans=(ans*10)+digit;
        n=n/10;
     }
     
     return ans;
} 
int modulo(int n){
    int rem=n%10;
    return rem;    
}

int main() {
    int n;
    cout<<"Enetr the Integer: "<<endl;
    cin>>n;

    cout<<"the reverse of integer is: "<<reverseInt(n)<<endl;

    int m;
    cout<<"Entre the m: "<<endl;
    cin>>m;
    cout<<"the modulo of m is: "<<modulo(m)<<endl;


    return 0;
}