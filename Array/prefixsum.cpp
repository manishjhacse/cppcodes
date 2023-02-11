#include<iostream>
#include<vector>
using namespace std;
void prefixsum(vector<int> &v)
{
    for(int i=0;i<v.size()-1;i++)
    {
        v[i+1]=v[i]+v[i+1];
    }
    return;
}
int main()
{
    vector<int> v;
    int n;
    cout<<"enter the size pf array:"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    prefixsum(v);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;

}