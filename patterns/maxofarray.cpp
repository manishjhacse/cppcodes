#include<iostream>
using namespace std;
int main()
{
    int a[10];
    int n;
    cout<<"enter the elements of array"<<endl;
    for(n=0;n<10;n++)
    {
        cin>>a[n];
    }
    cout<<"Finding maxium value......"<<endl;
    int max=a[0];
    for(int x:a)
    {
        if(max<x){
            max=x;
        }
    }
    cout<<max<<" is maxium";
    return 0;

}