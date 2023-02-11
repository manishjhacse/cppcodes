#include<iostream>
using namespace std;
int main()
{
    int row,column,n;
    char ch;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    row=1;
    int count=0;
    while(row<=n)
    {
        column=1;
        while (column<=n)
        {
            ch='A'+count;
            cout<<ch<<" ";
            column++;
            count++;
        }
        cout<<endl;
        row++;
        
    }
    return 0;
}