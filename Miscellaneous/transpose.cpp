#include<iostream>
using namespace std;
int main()
{
    int a[50][50],trans[50][50],i,j,r,c,temp;
    cout<<"Enter number of row and column:\n";
    cin>>r>>c;
    cout<<"Enter the elements of matrix:\n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"your matrix is:\n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"\nfinding transpose of matrix........\n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            trans[j][i]=a[i][j];
        }
    }
    cout<<"transpose of yout matrix is:\n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<trans[i][j]<<"\t";
        }
        cout<<"\n";
    }
    return 0;

}