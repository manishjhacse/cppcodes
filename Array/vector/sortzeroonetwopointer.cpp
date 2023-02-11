#include<iostream>
#include<vector>
using namespace std;
void sortZeroOne(vector<int> &v)
{
    int left_ptr=0,right_ptr=v.size()-1;
    while(left_ptr<right_ptr)
    {
        if(v[left_ptr]==1 && v[right_ptr]==0)
        {
            v[left_ptr++]=0;
            v[right_ptr--]=1;
        }
        if(v[left_ptr]==0)
        {
            left_ptr++;
        }
        if(v[right_ptr]==1)
        {
            right_ptr--;
        }
    }
    return ;
    

}
int main()
{
    vector<int>v;
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    sortZeroOne(v);
    for(int x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}