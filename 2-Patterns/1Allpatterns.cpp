#include<iostream>
using namespace std;
 
int main() {
    int n;
    cout << "Enter the the number of row:";
    cin >> n;

    cout<<"Pattern 1"<< endl;
    int row = 1;
    while (row<=n) {
        int col = 1;
        while(col<=n){
            cout << col << "";
            col++;
        }
        cout << endl;
        row++;
    }

    cout<<"pattern 2"<< endl;
    int row=1;
    int count=1;
    while(row<=n){
        int col=1;
        while(col<=n){
            cout << count << " ";
            count++;
            col++;
          
        } 
        cout << endl;
        row++;
    }


    return 0;
}

