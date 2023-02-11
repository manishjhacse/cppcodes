#include<iostream>
using namespace std;
int main()
{
    int row,column,n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    row=1;
    while(row<=n)
    {
        int space=n-row;
        while(space)
        {
            cout<<" ";
            space--;
        }
        column=1;
        while(column<=row)
        {
            cout<<column;
            column++;
        }
        int start=row-1;
        while(start)
        {
            cout<<start;
            start--;
        }
        cout<<endl;
        row++;

    }
    return 0;
}