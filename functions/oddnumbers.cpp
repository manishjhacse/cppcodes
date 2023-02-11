#include<iostream>
using namespace std;
void odd(int a,int b)
{
    for(int i=a;i<=b;i++)
    {
        if(i%2!=0)
        {
            cout<<i<<endl;
        }
    }
    return;
}
int main()
{
    int n1,n2;
    cout<<"Enter two numbers:"<<endl;
    cin>>n1>>n2;
    odd(n1,n2);
    return 0;
}