
#include<iostream>
using namespace std;
 
int main() {
    
    int a , b;
    cin >> a >> b;  //takin input from user we use "cin" and to show out put to the user we use "cout"

    // static typecasting
    float c = (float)a/b;
    cout << "The number in given verible:" << c << endl;


    char ch1 = 'a';
    cout << "The charcter in given verible:" << ch1 << endl;

    // This will type cast the 'a' char type data into int type using ASCII value for charcetr
    int x = 'a'; 
    cout << "The value given in verible is:" << x << endl;

    /*unsigned use to store only positive integers if we store the negative integer is will not
     return same value becuase it will convert 2's complement as it positive number it will not consider 
     the number is negavie. 
    */
    unsigned int y = -5;
    cout << "the number in y is:" << y << "\n";    

     return 0;
}