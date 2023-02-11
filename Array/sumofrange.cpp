#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    vector<int>v(n+1,0);
    cout<<"Enter the elements:"<<endl;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    for(int i=1;i<=n;i++)
    {
        v[i]+=v[i-1];
    }
    int q;
    cout<<"Enter number of queries"<<endl;
    cin>>q;
    while(q--)
    {
        int l,r;
        cout<<"Enter the range"<<endl;
        cin>>r>>l;
        int ans=v[r]-v[l-1];
        cout<<ans<<endl;
    }
    return 0;
}