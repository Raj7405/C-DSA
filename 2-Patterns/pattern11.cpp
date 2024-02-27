/*
A
B B
C C C
*/
#include<iostream>
using namespace std;
 
int main() {
    int n;
    cout<<"Enetr the number:";
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        char value = 'A'+row-1;
        while(col<=row){
            cout<< value << " ";  
            col++;
        }
        cout<<endl;
        row++;
    }



    return 0;
}