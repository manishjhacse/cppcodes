#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(7);
    for (int i = 0; i < 7; i++)
    {
        cin >> v[i];
    }
    int count = 0;
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] <= v[i + 1])
        {
            count = 0;
        }
        else
        {
            count++;
            break;
        }
    }

    if (count == 0)
    {
        cout << "VECTOR is sorted" << endl;
    }
    else
    {
        count = 0;
        for (int i = 0; i < v.size() - 1; i++)
        {
            if (v[i] >= v[i + 1])
            {
                count == 0;
            }
            else
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            cout << "VECTOR is sorted" << endl;
        }
        else
        {
            cout << "VECTOR is not sorted" << endl;
        }
    }

    return 0;
}