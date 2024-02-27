/*
1 1 1 1 1
  2 2 2 2
    3 3 3
      4 4
        5
      
*/
#include<iostream>
using namespace std;
 
int main() {
    int n;
    cout<<"Enter the number:";
    cin>>n;


    int row=1;
    int count=row;
    while(row<=n){
        int space=row-1;
        while(space){
            cout<<" "<<" ";
            space--;
        }

        int col=n-row+1;
        while (col){
            cout<<row<<" ";  
            col--;
        }
        
        cout<<endl;
        row++;
    }

    return 0;

}