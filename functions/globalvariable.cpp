#include<iostream>
using namespace std;
int globalvar=10;
void print()
{
    cout<<globalvar<<endl;
    return;
}
int main()
{
    int globalvar=5;
    /*if we declear a local variable of same name as global variable then in the function local variable has more priority*/
    cout<<globalvar<<endl;
    /*here print function will print global variable as this fn has no local variable with the same name as global varibale*/
    print();\
    /*If we have created a local variable of same name as global variable but wanr to use global variable inside  function or block we have to use scope resulation(::) before variable name*/
    cout<<::globalvar<<endl;
    return 0;
}