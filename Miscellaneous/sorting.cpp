#include<iostream>
using namespace std;
int main()
{
    int i,j,arry[50],size,temp;
    cout<<"Enter size of array(Max 50)\n";
    cin>>size;
    cout<<"Enter elements of array:\n";
    for(i=0;i<size;i++)
    {
        cin>>arry[i];
    }
    cout<<"Array before sorting is:\n";
    for(i=0;i<size;i++)
    {
        cout<<" "<<arry[i]<<" ";
    }
    for(i=0;i<size;i++)
    {
        for(j=0;j<size-i-1;j++)
        {
            if(arry[j]>arry[j+1])
            {
                temp=arry[j];
                arry[j]=arry[j+1];
                arry[j+1]=temp;
            }
        }
    }
    cout<<"\nArray after sorting is:\n";
    for(i=0;i<size;i++)
    {
        cout<<" "<<arry[i]<<" ";
    }
    return 0;
}