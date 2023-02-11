#include<iostream>
using namespace std;
int largestindex(int a[],int size)
{
    int max=INT32_MIN,maxindex=-1;
    for(int i=0;i<size;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            maxindex=i;
        }
    }
    return maxindex;
}
int main()
{
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    int a[size];
    cout<<"Enter elements of array:"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    int indexoflargest=largestindex(a,size);
   int largestnumber=a[indexoflargest];
   for(int i=0;i<size;i++)
   {
    if(a[i]==largestnumber)
    {
        a[i]=-1;
    }
   }
    int index_Of_Second_Largest=largestindex(a,size);
    cout<<"second largest element is "<<a[index_Of_Second_Largest]<<endl;
    return 0;
}