/*
A B C
B C D
C D E
*/
#include<iostream>
using namespace std;
 
int main() {
    int n;
    cout << "Enter thenumber:";
    cin>>n;

    int row=1;
    while(row<=n){
        int col=1;
        char ch=row+col+'A'-2;
        while(col<=n){
            cout<<ch<<" ";
            ch++;
            col++;
        }
        cout<<endl;
        row++;
    }
    
    return 0;
}