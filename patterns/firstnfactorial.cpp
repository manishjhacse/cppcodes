#include<iostream>
using namespace std;
int main()
{
    int n,result=1;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        result=result*i;
        cout<<"Factorial of "<<i<<" is "<<result<<endl;
    }
    return 0;
}