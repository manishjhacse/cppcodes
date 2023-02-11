#include<iostream>
using namespace std;
int main()
{
    int row=1,column,n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    while(row<=n)
    {
        column=0;
        while (column<row)
        {
            cout<<row+column<<" ";
            column++;
        }
        cout<<endl;
        row++;
        
    }
    return 0;

}
