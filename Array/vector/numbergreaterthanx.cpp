#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(7);
    cout << "Enter element of vector" << endl;
    for (int i = 0; i < 7; i++)
    {
        cin >> v[i];
    }
    int x, count = 0;
    cout << "Enter x: ";
    cin >> x;
    for (int ele : v)
    {
        if (ele > x)
        {
            count++;
        }
    }
    cout << "numbers greater then " << x << " are " << count;
    return 0;
}