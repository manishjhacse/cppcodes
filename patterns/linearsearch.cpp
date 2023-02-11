#include<iostream>
using namespace std;
int main()
{
    int A[10],n,key;
    cout<<"enter the elements"<<endl;
    for(n=0;n<10;n++)
    {
        cin>>A[n];
    }
    cout<<"enter the key to find"<<endl;
    cin>>key;
    for(n=0;n<10;n++)
    {
        if(key==A[n])
        {
            cout<<key<<" found at index "<<n<<endl;
            return 0;
        }
    }
    cout<<key<<" not found"<<endl;
    return 0;



}