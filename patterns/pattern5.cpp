#include<iostream>
using namespace std;
int main()
{
    int row=1,column,n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cout<<"Your pattern is"<<endl;
    while(row<=n)
    {
        column=1;
        while(column<=row)
        {
            cout<< row;
            column++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}