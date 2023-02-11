#include<iostream>
#include<string>
using namespace std;
int main()
{
    int age;
    string name;
    cout<<"Enter your name:\t";
    getline(cin,name);
    cout<<"Enter your age:\t";
    cin>>age;
    if(age>=18)
    {
        cout<<"congrats dear "<<name<<" you can vote";
    }
    else{
       cout<<"sorry dear "<<name<<" you have to wait "<<18-age<<" more years vote";
    }
    return 0;
}