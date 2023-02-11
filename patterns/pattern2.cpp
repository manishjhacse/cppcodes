#include<iostream>
using namespace std;
int main()
{
    int i=1,j;
    while(i<=3)
    {
        for(j=1;j<=3;j++)
        cout<<3-j+1<<" ";
        cout<<endl;
        i++;

    }
    cout<<"2nd method."<<endl;
    i=1;
      while(i<=3)
    {
        for(j=3;j>=1;j--)
        cout<<j<<" ";
        cout<<endl;
        i++;

    }
    return 0;
}