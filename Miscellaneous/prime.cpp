#include<iostream>
using namespace std;
int main()
{
    int n,i,count=0;
    cout<<"Enter the number\n";
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0 and n!=0 and n!=1)
    {
        cout<<n<<" is prime number";
    }
    else{
        cout<<n<<" is not a prime number";
    }
    return 0;

}