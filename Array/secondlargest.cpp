#include<iostream>
using namespace std;
int main()
{
    int array[]={4,6,8,10,11,17,0,53,13};
    int max1=INT32_MIN,max2=INT32_MIN;
    for(int i=0;i<9;i++)
    {
        if(array[i]>max1)
        {
            max2=max1;
            max1=array[i];
        }
        else if(array[i]>max2)
        {
            max2=array[i];
        }
    }
    cout<<max1<<" "<<max2;
    return 0;
}
