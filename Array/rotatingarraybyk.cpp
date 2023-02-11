#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of array" << endl;
    cin >> size;
    int array[size], ansarray[size];
    cout << "Enter the element of array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    int k;
    cout << "Enter the numbers to be rotated" << endl;
    cin >> k;
    k = k % size;
    int j = 0;
    for (int i = size - k; i < size; i++)
    {
        ansarray[j] = array[i];
        j++;
    }
    for (int i = 0; i < size - k; i++)
    {
        ansarray[j] = array[i];
        j++;
    }
    for (int i = 0; i < size; i++)
    {
        cout << ansarray[i] << " ";
    }
    return 0;
}