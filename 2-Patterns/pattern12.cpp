/*
A
B C 
D E F 
G H I J
*/
#include<iostream>
using namespace std;
 
int main() {
    int n;
    cout<<"Enter the number:";
    cin >> n;

    int row = 1;
    char value= 'A'+row-1; 
    while (row<=n) {
        int col = 1;
        while(col<=row){
            cout << value << " ";
            value++;
            col++;
        }
        cout << endl;
        row++;
    }


    return 0;
}