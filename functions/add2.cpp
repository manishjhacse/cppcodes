#include<iostream>
using namespace std;
int add(int num1,int num2){
    int sum=num1+num2;
    return sum;
}
int add(int num1,int num2,int num3){
    int sum=num1+num2+num3;
    return sum;
}
float add(float num1,float num2){
    float sum=num1+num2;
    return sum;
}
int main()
{
    int a=4,b=5;
    float c=3.2,d=5.3;
    cout<<add(a,b)<<endl;
    cout<<add(a,b,8)<<endl;
    cout<<add(c,d)<<endl;
    return 0;
}