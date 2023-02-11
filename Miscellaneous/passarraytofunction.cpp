#include<iostream>
using namespace std;
void array(int[],int);
int main()
{
    int i,a[50],size;
    cout<<"enter size of array:\n";
    cin>>size;
    cout<<"enter elements of array:\n";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    array(a,size);
    return 0;
}
void array(int b[],int c)
{
    int i;
    cout<<"Array is:\n";
    for(i=0;i<c;i++)
    {
        cout<<" "<<b[i]<<" ";
    }
}