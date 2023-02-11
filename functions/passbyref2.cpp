#include<iostream>
using namespace std;
void change(int &a,int &b)/*here a and b will get same memory as of x and y so any change in a and b will also change the value of x and y*/
{
    a=500;
    b=400;
}
int main()
{
    int x=4,y=9;
    change(x,y);
    cout<<x<<" "<<y<<endl;
    return 0;
}