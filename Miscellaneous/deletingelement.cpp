#include<iostream>
using namespace std;
int main()
{
    int i,a[50],size,pos;
    cout<<"Enter size of array:\n";
    cin>>size;
    cout<<"Enter elements of array:\n";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"Array is:\n";
    for(i=0;i<size;i++)
    {
        cout<<" "<<a[i]<<" ";
    }
    cout<<"\nEnter the position number to delete:\n";
    cin>>pos;
    if(pos>size)
    {
        cout<<"invalid input";
    }
    else
    {
        --pos;
        for(i=pos;i<size-1;i++)
        {
            a[i]=a[i+1];
        }
    
     cout<<"Array after deleting element is\n";
     for(i=0;i<size-1;i++)
      {
        cout<<" "<<a[i]<<" ";
      }
    }
    return 0;

}