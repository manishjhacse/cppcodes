#include<iostream>
using namespace std;
int main()
{
    int amount,hundred,fifty,twenty,one;
    cout<<"Enter the amount"<<endl;
    cin>>amount;
    hundred=amount%100;
    amount=amount/100;
    fifty=amount%50;
    amount=amount/50;
    twenty=amount%20;
    amount=amount/20;
    one=amount;
    

}