#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
void sort(vector<int> &v)
{
   int left_ptr=0,right_ptr=v.size()-1;
   vector<int> ans;
   while(left_ptr<=right_ptr)
   {
        if(abs(v[left_ptr])<abs(v[right_ptr]))
        {
            ans.push_back(v[right_ptr]*v[right_ptr]);
             right_ptr--;
        }
        else{
            ans.push_back(v[left_ptr]*v[left_ptr]);
            left_ptr++;
           
        }
   }

   reverse(ans.begin(),ans.end());
   for(int i=0;i<ans.size();i++)
   {
    cout<<ans[i]<<" ";
   }
   

}
int main()
{
    vector<int> v;
    cout<<"enter the size of array:"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the elements of array:"<<endl;
    for(int i=0;i<n;i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    sort(v);

    return 0;
}