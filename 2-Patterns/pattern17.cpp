/*

* * * * 
* * * 
* * 
* 

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
            cout<<"*";
            space--;
        }
        cout<<endl;
        row++;

    }
    return 0;
}
