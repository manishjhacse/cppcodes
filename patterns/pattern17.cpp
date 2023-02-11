#include<iostream>
using namespace std;
int main()
{
    int r,c,i,j;
    cout<<"Enter the number of row and column"<<endl;
    cin>>r>>c;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(i==1 || j==1 || i==r||j==c){
                cout<<"*";
            }
            else{
                cout<<" ";
            }

            
        }
        cout<<endl;
    }
    return 0;
}