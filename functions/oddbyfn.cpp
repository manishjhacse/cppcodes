#include <iostream>
using namespace std;
bool odd(int n)
{
    if (n % 2 != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n1, n2;
    cout << "Enter two numbers" << endl;
    cin >> n1 >> n2;
    for (int i = n1; i <= n2; i++)
    {
        if (odd(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}