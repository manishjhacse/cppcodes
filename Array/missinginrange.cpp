#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, missing_number;
    cout << "enter the range of array from 0 to n:" << endl;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    int sum_of_range = n * (n + 1) / 2;
    missing_number = sum_of_range - sum;
    cout << "missing number is " << missing_number << endl;
    return 0;
}