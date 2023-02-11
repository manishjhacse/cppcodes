#include<iostream>
using namespace std;
int main()
{
    int a[50][50],b[50][50],m[50][50],r1,c1,r2,c2,i,j,k,sum;
    cout<<"enter row and column of 1st matrix"<<endl;
    cin>>r1>>c1;
    cout<<"enter row and column of 2nd matrix\n";
    cin>>r2>>c2;
    if(c1!=r2)
    {
        cout<<"matrices can't be multiplied";
        exit(1);
    }
    cout<<"enter elements of 1st matrix:\n";
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cin>>a[i][j];
        }
    }
      cout<<"enter elements of 2nd matrix:\n";
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            cin>>b[i][j];
        }
    }
    //multiplying...........
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            sum=0;
            for(k=0;k<c1;k++)
            {
                sum=sum+a[i][k]*b[k][j];
            }
            m[i][j]=sum;

        }
    }
    cout<<"Multiplication of two matrices are:\n";
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            cout<<m[i][j]<<"\t";
        }
        cout<<"\n";
    }
   return 0;
}