#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size(must be an odd number) of cross:"<<endl;
    cin>>size;
    for(int i=1;i<=size;i++)
    {
        for(int j=1;j<=size;j++)
        {
            if(i==j || i+j-1==size)
            {
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