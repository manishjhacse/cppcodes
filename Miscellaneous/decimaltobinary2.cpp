#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int ans=0,i=0,digit;
    while(n!=0)
    {
        digit=n%2;
        ans=(digit*pow(10,i))+ans;
        i++;
        n=n/2;
    }
    cout<<"Binary is "<<ans<<endl;
    return 0;
}