#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float x=3456.123f;
    double a=9.123456789;
    long double aa=999.12345678L;
    cout<<setprecision(10);
    cout<<"\ndouble a="<<a;
    cout<<"\nlong double aa=="<<aa;
    cout<<"\nfloat x="<<x;


    return 0;
}
