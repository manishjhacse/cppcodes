#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int decimalnumber=0,binarynumber,i=0,digit;
    cout<<"Enter the binary number"<<endl;
    cin>>binarynumber;
    while(binarynumber>0)
    {
        digit=binarynumber%10;
        decimalnumber=decimalnumber+(digit*pow(2,i));
        i++;
        binarynumber=binarynumber/10;
    }
    cout<<"Decimal number is "<<decimalnumber;
    return 0;
}