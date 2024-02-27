#include<iostream>
using namespace std;
 
bool isEven(int n){
    if(n&1){
        return 0;
    }
    return 1;
}

int main() {
    int n;
    cout << "Enter the number to check wethe number is Even or Odd:"<<endl;
    cin>>n;

    if(isEven(n)){
        cout<<n<<" "<<"is Even number."<<endl;
    
    }else{
        cout<<n<<" "<<"is Odd number."<<endl;
    }

    return 0;
}