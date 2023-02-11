#include<iostream>
using namespace std;
int main()
{
    int row,column,n;
    char ch;
    int count=0;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    row=1;
    while(row<=n)
    {
        column=1;
        count=0;
        while(column<=n)
        {
            ch='A'+row-1+count;
            cout<<ch<<" ";
            column++;
            count++;
        }
        row++;
        cout<<endl;

    }
    return 0;
}