#include<iostream>
using namespace std;
 
int main() {
    int ammount;
    cout<<"Eneter the ammount:";
    cin>>ammount;

    int Rs100,Rs50,Rs20,Rs10;
    switch (1)
    {
    case 1:
        Rs100=ammount/100;
        ammount=ammount%100;
        cout<<"no of 100 rupees note requierwd are:"<<Rs100<<endl;
    case 2:
        Rs50=ammount/50;
        ammount=ammount%50;
        cout<<"no of 50 rupees note requierwd are:"<<Rs50<<endl;
    case 3:
        Rs20=ammount/20;
        ammount=ammount%20;
        cout<<"no of 20 rupees note requierwd are:"<<Rs20<<endl;
    case 4:
        Rs10=ammount/10;
        ammount=ammount%10;
        cout<<"no of 10 rupees note requierwd are:"<<Rs10<<endl;
    default:
        break;
    }


    return 0;
}