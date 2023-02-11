#include<iostream>
using namespace std;
int main()
{
    int i=1,j,n,count=1;
    cin>>n;
    while(i<=n)
    {
        j=1;
        while(j<=n)
        {
            cout<<count<<" ";
            count++;
            j++;

        }
        cout<<endl;
        i++;
    }
    return 0;

}
