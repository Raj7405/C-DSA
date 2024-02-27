#include<iostream>
using namespace std;
 
int fibonacci(int n){
    int a = 0;
    int b = 1;
    int c;
    for(int i=1; i<=n; i++){      
        //to print first two letter
        if(i==1){
            cout<<a<<" ";
            continue;           //using to skip first itretion
        }
        if(i==2){
            cout<<b<<" ";
            continue;          //using to skip second itretion
        }
        c=a+b;
        a=b;
        b=c;
        cout<<c<<" ";
    }
    //return b;   if you want direct nth number of fibonacci serties.+
      
} 

int main() {
    int n;
    cout<<"Enter the number:"<<endl;;
    cin>>n;

    fibonacci(n);


    return 0;
}