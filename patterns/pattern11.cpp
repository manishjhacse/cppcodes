#include<iostream>
using namespace std;
int main()
{
    int row=1,column;
    int n;
    char ch;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    while(row<=n)
    {
        column=0;
        while(column<row)
        {
            ch='A'+n-row+column;
            cout<<ch<<" ";
            column++;

        }
        cout<<endl;
        row++;
    }
    return 0;
}