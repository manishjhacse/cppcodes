#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec(7);
    cout << "Enter the elements of vector:" << endl;
    for (int i = 0; i < 7; i++)
    {
        cin >> vec[i];
    }
    int x, count = 0;
    cout << "Enter x: ";
    cin >> x;
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == x)
        {
            count++;
        }
    }
    cout << "Total no of occurance of " << x << " is " << count;
    return 0;
}