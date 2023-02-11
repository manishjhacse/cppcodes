#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 5, 7, 9, 6, 3, 4, 2, 0, 11};
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            for (int k = j + 1; k < 10; k++)
            {
                if (a[i] + a[j] + a[k] == 9)
                {
                    cout << a[i] << " " << a[j] << " " << a[k] << endl;
                }
            }
        }
    }
    return 0;
}