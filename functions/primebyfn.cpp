#include <iostream>
using namespace std;
bool prime(int n)
{
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 0)
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
        if (prime(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}