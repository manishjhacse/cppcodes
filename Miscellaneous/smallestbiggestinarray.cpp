#include<iostream>
using namespace std;
int main()
{
    int i,a[50],size,small,big;
    cout<<"Enter size of array:\n";
    cin>>size;
    cout<<"Enter elements of array:\n";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    small=a[0];
    big=a[0];
    cout<<"searching for smallest and bigggest element....................................\n";
    for(i=0;i<size;i++)
    {
        if(small>a[i])
        {
            small=a[i];
        }
        if(big<a[i])
        {
            big=a[i];
        }
    }
    cout<<"searching completed\n";
    cout<<"smallest element is "<<small;
    cout<<"\nbiggest element is "<<big;
    return 0;

}