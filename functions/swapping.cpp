#include<iostream>
using namespace std;
void swap(int &x,int &y)
{
    x=x+y;
    y=x-y;
    x=x-y;
    return;
}
int main()
{
    int a=42,b=36;
    cout<<"a= "<<a<<" and b= "<<b<<endl;
    swap(a,b);
    cout<<"After swapping the numbers:"<<endl;
    cout<<"a= "<<a<<" and b= "<<b<<endl;
    return 0;
}