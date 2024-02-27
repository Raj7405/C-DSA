#include<iostream>
using namespace std;

long long int mySqrt(int x) {
      int s=0;
      int e=x;
      long long int mid=s+(e-s)/2;
      int ans=0;
      while(s<=e){
          long long int squre=mid*mid;
          if(mid*mid==x){
              return mid;
          }
          if(x <squre){
              e=mid-1;
          }
          else if(squre < x){
              ans=mid;
              s=mid+1;
          }
          mid=s+(e-s)/2;
      }  
      return ans;
}
double morePrecision(int x,int precision,int tempSol){
    double factor=1;
    double ans=tempSol;
    for(int i=0; i<=precision; i++){
        factor=factor/10;
        for(double j=ans; j*j<x; j=j+factor){
            ans=j;
        }
    }
    return ans;
}        
int main() {
    int x;
    cout<<"Enter the number: "<<endl;
    cin>>x;

    int tempSol=mySqrt(x);
    cout<<"the squre root of given number is"<<tempSol<<endl;
    cout<<"the more precise squrer root of given number is : "<<morePrecision(x,5,tempSol);
    return 0;
}