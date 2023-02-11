#include<iostream>
using namespace std;
int main()
{
    int i,a[50],size,even[50],odd[50],j=0,k=0;
    cout<<"Enter size of array:\n";
    cin>>size;
    cout<<"enter elements of Array:\n";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<size;i++)
    {
        if(a[i]%2==0)
        {
            even[j]=a[i];
            j++;
        }
        else{
            odd[k]=a[i];
            k++;
        }
    }
    cout<<j<<" even numbers:\n";
    for(i=0;i<j;i++)
    {
        cout<<" "<<even[i]<<" ";
    }
     cout<<"\n"<<k<<" odd numbers:\n";
    for(i=0;i<k;i++)
    {
        cout<<" "<<odd[i]<<" ";
    }
    return 0;

   
}