/*
     1
    1 2
   1 2 3
  1 2 3 4
 1 2 3 4 5
    And
 Without space pirnt
     1
    12
   123
  1234
 12345
*/
#include<iostream>
using namespace std;
 
int main() {
    int n;
    cout<<"Enter the number:";
    cin>>n;


    int row=1;
    while(row<=n){
        int space=n+1-row;
        while(space){
            cout<<" ";
            space--;
        }

        int col=1;
        while (col<=row){
            cout<<col;  //cout<<col<<" ";
            col++;
        }
        
        cout<<endl;
        row++;
    }
    return 0;
}