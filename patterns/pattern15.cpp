#include<iostream>
using namespace std;
int main()
{
    int row,column,n,space,count;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    row=1;
    while(row<=n)
    {
        space=n-row;
        column=space+1;
        count=1;
        while(space)
        {
            cout<<" ";
            space--;
        }
        while(column<=n)
        {
            cout<<count;
            count++;
            column++;
        }
        count=count-2;
        while(column<=n+row-1)
        {
            cout<<count;
            count--;
            column++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}