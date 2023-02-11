#include<iostream>
using namespace std;
int main()
{
    int a[]={1,4,6,4,1,6,11,8,3};
    for(int i=0;i<9;i++)
    {
        for(int j=i+1;j<9;j++)
        {
            if(a[i]==a[j])
            {
                a[i]=a[j]=-1;
            }
        }
    }
    for(int i=0;i<9;i++)
    {
        if(a[i]>0)
        {
            cout<<a[i]<<endl;
        }
    }
    return 0;
}