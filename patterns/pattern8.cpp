#include<iostream>
using namespace std;
int main()
{
    int row,column,n;
    cin>>n;
    char character;
    row=1;
    while(row<=n)
    {
        column=1;
        character=65+row-1;
        while(column<=n)
        {
            cout<<character<<" ";
            column++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}