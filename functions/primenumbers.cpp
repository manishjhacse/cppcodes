#include<iostream>
using namespace std;
void primenumber(int a,int b)
{

    for(int i=a;i<=b;i++)
    {
        int count=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==0)
        {
            cout<<i<<" ";
        }
    }
    return;
}
int main()
{
    int n1,n2;
    cout<<"Enter two numbers"<<endl;
    cin>>n1>>n2;
    primenumber(n1,n2);
    return 0;

}