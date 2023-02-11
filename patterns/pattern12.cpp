#include<iostream>
using namespace std;
int main()
{
    int row,column,n,count;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    row=1;
    while(row<=n)
    {
        count=n-row;
        column=1;
        while(column<=count)
        {
            cout<<" ";
            column++;
        }
        while(column<=n)
        {
            cout<<"*";
            column++;
        }
        cout<<endl;
        row++;

    }
    return 0;
}