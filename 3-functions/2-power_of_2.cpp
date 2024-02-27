#include<iostream>
using namespace std;

int powerOfTwo(int n){
    int ans=1;
    for(int i=1; i<=n; i++){
        ans=ans*2;
    }
    return ans;
}
int powerOFTwo2(int n){
    int count=1;
    int ans;
    if(n%2==0){
        int a=n;
        while(a!=0){
            ans=a/2;
            if(ans!=2 && ans%2==0){
                count++;
            } 
            a=ans;
        }
    }
    return count;
} 
int main() {
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    cout<<"the "<<n<<" power of 2 is: "<<powerOfTwo(n)<<endl;
    
    int m;
    cout<<"Enter the number: "<<endl;
    cin>>m;
    cout<<"the "<<m<<" power of 2 true one is: "<< powerOFTwo2(m)<<endl;

    return 0;
}