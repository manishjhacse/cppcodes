#include <iostream>
#include <vector>
using namespace std;
void sortZeroOne(vector<int> &v)
{
    int zero_Count = 0;
    for (int x : v)
    {
        if (x == 0)
        {
            zero_Count++;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (i < zero_Count)
        {
            v[i] = 0;
        }
        else
        {
            v[i] = 1;
        }
    }
    return;
}
int main()
{
    vector<int> v;
    int n;
    cout << "Enter the size" << endl;
    cin >> n;
    cout << "Enter the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    sortZeroOne(v);
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}