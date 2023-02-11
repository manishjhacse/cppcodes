#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    for (int i = 0; i < 5; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    v.insert(v.begin()+3,9);
    //foreach loop
    for(int ele:v)
    {
        cout << ele << " ";
    }
    cout<<endl;
    v.erase(v.end()-3);
    //while loop
    int i=0;
    while(i<v.size())
    {
        cout << v[i] << " ";
        i++;
    }
    return 0;
}