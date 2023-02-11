#include<iostream>
using namespace std;
 int add(int num1,int num2)
 {
    int sum=num1+num2;
    return sum;
 }
 int main()
 {
    int n1,n2,sum;
    cout<<"Enter two numbers"<<endl;
    cin>>n1>>n2;
    sum=add(n1,n2);
    cout<<"sum of "<<n1<<" and "<<n2<<" is "<<sum<<endl;
    return 0;
 }