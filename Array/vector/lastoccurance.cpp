#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(6);
    cout << "Enter the elements of vector" << endl;
    for (int i = 0; i < 6; i++)
    {
        cin >> v[i];
    }
    int x;
    cout << "Enter x: ";
    cin >> x;
    int occurance = -1;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == x)
        {
            occurance = i;
        }
    }
    cout << "last occurance is: " << occurance << endl;
    //to find last occurance we can start loop from last
    int lastoccurance=-1;
    for(int i=v.size()-1;i>=0;i--)
    {
        if(x==v[i])
        {
            lastoccurance=i;
            break;
        }
    }
    cout<<"last occurance is: "<<lastoccurance<<endl;
    return 0;
}