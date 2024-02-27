#include<iostream>
using namespace std;

bool isPowerOfTwo(int n){
    int ans=1;
    for(int i=0; i<=30; i++){
        ans=ans*2;
        if(ans==n){
            return true;
        }
    }
    return false;
}
int main() {
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    cout<<"is the "<<n<<" power of two? "<<endl;
    if(isPowerOfTwo(n)){
        cout<<"True";
    }else{
        cout<<"false";
    }
    return 0;
}