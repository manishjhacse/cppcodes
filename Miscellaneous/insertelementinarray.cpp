#include<iostream>
using namespace std;
int main()
{
    int i,a[50],size,pos,ele;
    cout<<"Enter size of array\n";
    cin>>size;
    cout<<"Enter elements of array:\n";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"Array is:\n";
    for(i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\nenter position to add element:\n";
    cin>>pos;
    if(pos>size)
    {
        cout<<"invalid input";
    }
    else{
        --pos;
    cout<<"enter the element:\n";
    cin>>ele;
    for(i=size;i>=pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=ele;
    cout<<"new array is:\n";
    for(i=0;i<=size;i++)
    {
        cout<<a[i]<<" ";
    }

    }
    return 0;

}