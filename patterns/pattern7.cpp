#include<iostream>
using namespace std;
int main()
{
    int row=1,column,n;
    int value;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    while(row<=n)
    {
        column=1;
        value=row;
        while(column<=row)
        {
            cout<<value<<" ";
            value--;
            column++;

        }
        cout<<endl;
        row++;
    }
    return 0;
}