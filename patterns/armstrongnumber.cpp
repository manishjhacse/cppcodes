#include<iostream>
using namespace std;
int main()
{
    cout<<"Armtrong numbers between 1 & 100 are:"<<endl;
    for(int i=1;i<=500;i++)
    {
        int newn=0,digit,n;
        n=i;
        while(n!=0)
        {
            digit=n%10;
            newn=newn+(digit*digit*digit);
            n=n/10;
        }
        if(newn==i)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}