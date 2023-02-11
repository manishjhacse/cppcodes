#include<iostream>
using namespace std;
int main()
{
    int row,column,n,star;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    row=1;
    while(row<=n)
    {
        star=n-row+1;
        while(star)
        {
            cout<<"*";
            star--;
        }
        cout<<endl;
        row++;

    }
    return 0;
}