#include<iostream>
#include<vector>
using namespace std;
bool subarray(vector<int> &v)
{
    int total_Sum=0,prefix_Sum=0;
    for(int i=0;i<v.size();i++)
    {
        total_Sum+=v[i];
    }
    for(int i=0;i<v.size();i++)
    {
        prefix_Sum+=v[i];
        int suffix_Sum=total_Sum-prefix_Sum;
        if(suffix_Sum==prefix_Sum)
        {
            return true;
        }
    }
    
    return false;
}
int main()
{
    vector<int> v;
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    cout<<"Enter the element of array"<<endl;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele; 
        v.push_back(ele);
    }
    cout<<subarray(v)<<endl;
    return 0;
}