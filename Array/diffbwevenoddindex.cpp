#include<iostream>
using namespace std;
int main()
{
    int a[]={2,3,4,5,6,7,8};
    int sum=0;
    for(int ele:a)
    {
        if(ele%2==0)
        {
            sum+=ele;
        }
        else{
            sum-=ele;
        }
    }
    cout<<"Difference of even and odd index elements is "<<sum;
    return 0;
}