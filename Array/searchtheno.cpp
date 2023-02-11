#include<iostream>
using namespace std;
int main()
{
    int array[5]={25,56,41,85,96};
    int key,ans=-1;
    cout<<"Enter the element you want to search in array:"<<endl;
    cin>>key;
    for(int i=0;i<5;i++)
    {
        if(array[i]==key)
        {
            ans=i;
            break;
        }
    }
    cout<<ans;
    return 0;
}