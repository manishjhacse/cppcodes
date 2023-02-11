#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number(1-5)"<<endl;
    cout<<"To end the loop enter 7"<<endl;
    while(num!=7)
  {  cin>>num;
    switch(num)
    {
        case 1:
        cout<<"you entered 1"<<endl;
        break;
        case 2:
        cout<<"you entered 2"<<endl;
        break;
        case 3:
        cout<<"you entered 3"<<endl;
        break;
        case 4:
        continue;
        cout<<"you entered 4"<<endl;
        break;
        case 5:
        cout<<"you entered 5"<<endl;
        break;
        case 7:
        cout<<"signing out from the loop"<<endl;
        default:
        cout<<"invalid input"<<endl;;
    }
  }
    return 0;
}