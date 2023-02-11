#include<iostream>
using namespace std;
int main()
{
    int r1,c1,r2,c2;
    cout<<"Enter the row and column of 1st matrix"<<endl;
    cin>>r1>>c1;
    cout<<"Enter the row and column of 2nd matrix"<<endl;
    cin>>r2>>c2;
    if(c1!=r2)
    {
        cout<<"matrix can't be multiplied"<<endl;
        exit(0);
    }
    int k=r2,sum=0;
    int A[r1][c1],B[r2][c2],M[r1][c2];
    cout<<"Enter the elements of 1st matrix"<<endl;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cout<<"Enter the value of A"<<i+1<<j+1<<endl;
            cin>>A[i][j];
        }
    }
     cout<<"Enter the elements of 2nd matrix"<<endl;
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<"Enter the value of B"<<i+1<<j+1<<endl;
            cin>>B[i][j];
        }
    }
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            sum=0;
            for(k=0;k<c1;k++)
            {
                sum=sum+A[i][k]*B[k][i];
            }
            M[i][j]=sum;
        }
    }
    cout<<"the multiplication of matrix is "<<endl;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<M[i][j]<<" ";
        }
        cout<<endl;

    }
    return 0;


}
