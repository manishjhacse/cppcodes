#include<iostream>
#include<vector>
using namespace std;
//1 3 5 6 3
bool subarray(vector<int> &v)
{
    int left_ptr=0,right_ptr=v.size()-1;
    int prefix_sum=0,suffix_sum=0;
    while(left_ptr<right_ptr)
    {
        if(prefix_sum<suffix_sum)
        {
            prefix_sum=prefix_sum+v[left_ptr++];
        }
        else if(left_ptr>right_ptr)
        {
            suffix_sum=suffix_sum+v[right_ptr--];
        }
        else{
            prefix_sum=prefix_sum+v[left_ptr++];
            suffix_sum=suffix_sum+v[right_ptr--];
        }
    }
    if(prefix_sum==suffix_sum)
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    vector<int> v;
    int n;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    bool ans=subarray(v);
    cout<<ans<<endl;
    return 0;
}