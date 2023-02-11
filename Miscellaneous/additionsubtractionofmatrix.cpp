#include<iostream>
using namespace std;
int main()
{
    int a[50][50],b[50][50],s[50][50],d[50][50],r,c,i,j;
    cout<<"enter the number of row and column:\n";
    cin>>r>>c;
    cout<<"enter the elements of 1st matrix:\n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter the elements of 2nd matrix:\n";
    for (i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>b[i][j];

        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            s[i][j]=a[i][j]+b[i][j];
            d[i][j]=a[i][j]-b[i][j];
        }
    }
    cout<<"Addition of matrix is:\n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<s[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"subtraction of matrix is:\n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<d[i][j]<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}