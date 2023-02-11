#include<iostream>
using namespace std;
int add(int a,int b=0,int c=0){
    return a+b+c;
}
int main()
{
    cout<<add(5)<<endl; //sum=5+0+0
    cout<<add(5,1)<<endl;//sum=5+1+0
    cout<<add(5,2,4)<<endl;//sum=5+2+4
   /* cout<<add(5,4,5,4)<<endl; this will throw error as we are passing more value to function */
    return 0;
}