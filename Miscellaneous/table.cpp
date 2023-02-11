#include<iostream>
using namespace std;
int main()
{
    int num,i;
    cout<<"Enter a number:\t";
    cin>>num;
    cout<<"The table of "<<num<<" is:\n";
    for(i=1;i<=10;i++)
    {
        cout<<num*i<<"\n";
    }
    return 0;

}