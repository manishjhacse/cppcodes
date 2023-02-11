#include<iostream>
using namespace std;
int main()
{
    int a[]={0,1,1,1,1,0,0,0,1,0,1,0,1,0};
    int count=0;
    for(int i=0;i<14;i++)
    {
        if(a[i]==0)
        {
            count++;
        }
    }
    for(int i=0;i<count;i++)
    {
        a[i]=0;
    }
    for(int i=count;i<14;i++)
    {
        a[i]=1;
    }
    for(auto x:a)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0; 
}