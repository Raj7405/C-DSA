#include<iostream>
using namespace std;
 
int main() {
     int i = 2;
     int n;
     cout << "Range of prime number you want:";
     cin >> n ;

     for(int i=0; i<=n; i++){
        if(i % 2 != 0){
            cout << "The prime number is :"<< i << endl;
        }
        
     }


   
}