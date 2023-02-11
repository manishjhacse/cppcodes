#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the last term"<<endl;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        if(i%2!=0){
            sum=sum+i;

        }
        else{
            sum=sum-i;
        }
    }
    cout<<"Sum of series is "<<sum<<endl;
    return 0;
}