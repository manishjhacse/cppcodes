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
        column=1;
        while(column<=n-row+1)
        {
            cout<<column;
            column++;
        }
        int star=row-1;
        column=1;
        while(column<=2*star)
        {
            cout<<"*";
            column++;
        }
        int start=n-row+1;
        while(start)
        {
            cout<<start;
            start--;
        }
       

        cout<<endl;
        row++;
    }
}