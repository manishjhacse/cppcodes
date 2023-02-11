#include<iostream>
using namespace std;
int main()
{
    int p=5;
    int &q=p;//here var q will get same memorylocation as of p
    cout<<p<<endl;
    cout<<q<<endl;
    q++;
    cout<<p<<endl;
    cout<<q<<endl;
    //printing memory location of p and q
    cout<<&p<<endl;
    cout<<&q<<endl;
    return 0;
}