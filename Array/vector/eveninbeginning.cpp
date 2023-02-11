/*write a program to sort all even elemet in left and odd element in right the relative order of element does not matter*/
#include <iostream>
#include <vector>
using namespace std;
void evenInTheBeginning(vector<int> &v)
{
    int left_ptr = 0, right_ptr = v.size() - 1;
    while (left_ptr < right_ptr)
    {
        if (v[left_ptr] % 2 != 0 && v[right_ptr] % 2 == 0)
        {
            int temp = v[left_ptr];
            v[left_ptr] = v[right_ptr];
            v[right_ptr] = temp;
            left_ptr++;
            right_ptr--;
        }
        if (v[left_ptr] % 2 == 0)
        {
            left_ptr++;
        }
        if (v[right_ptr] % 2 != 0)
        {
            right_ptr--;
        }
    }
    return;
}
int main()
{
    vector<int> v;
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;
    cout << "Enter the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    evenInTheBeginning(v);
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}