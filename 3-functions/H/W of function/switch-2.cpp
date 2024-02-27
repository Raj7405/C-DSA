#include<iostream>
using namespace std;
 
int main() {
    int n;
    cout << "Enter the Ammount:";
    cin>>n;

    int note;
    cin>>note;

    switch (note)
    {
    case 100:
        cout << "no of 100 rupees not need are:"<<n/100<<endl;
        break;
    case 50:
        cout<<"no of 50 rupees notes needed are:"<<n/50<<endl;
        break;
    case 20:
        cout<<"no of 20 rupees notes needed are:"<<n/20<<endl;
        break;
    case 10:
        cout<<"no of 10 rupees notes needed are:"<<n/10<<endl;
        break;
    default:
        break;
    }


    return 0;
}