#include<iostream>
using namespace std;
int main()
{
    int array[6]={35,56,78,341,52,96};
    int max=array[0];
    for(int i=1;i<6;i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }

    }
    cout<<"maxium number is "<<max;
    return 0;
}