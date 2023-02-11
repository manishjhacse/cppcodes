#include<iostream>
using namespace std;
int main()
{
    int array[5];
    //to take input by for each loop we have to use &,example:-
    for(auto &element:array)
    {
        cin>>element;
    }
    //printing using for each loop
    for(auto element:array)
    {
        cout<<element<<" ";
    }
    return 0;

}