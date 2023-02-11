#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    int array[size],targetsum,count=0;
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    cout<<"Enter the target sum: ";
    cin>>targetsum;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(array[i]+array[j]==targetsum)
            {
                cout<<array[i]<<" "<<array[j]<<endl;
                count++;
            }
        }
    }
    cout<<"Total number of pairs whose sum is "<<targetsum<<" is "<<count<<endl;
    return 0;
}