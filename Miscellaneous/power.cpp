#include<iostream>
using namespace std;
int main()
{
    unsigned int num,pow,i,result;
    cout<<"Enter a number\n";
    cin>>num;
    result=num;
    cout<<"Enter the power\n";
    cin>>pow;
    for(i=2;i<=pow;i++)
    {
        result=result*num;
    }
    cout<<num<<" to the power "<<pow<<" is "<<result;
    return 0;
}