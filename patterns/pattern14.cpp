#include<iostream>
using namespace std;
int main()
{
    int row,column,n,space;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    row=1;
    while(row<=n)
    {
        space=row-1;
        column=space+1;
        while(space)
        {
            cout<<" ";
            space--;
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