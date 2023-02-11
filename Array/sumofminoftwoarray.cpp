#include <iostream>
using namespace std;
void input(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    return;
}
int main()
{
    int n;
    cout << "Enter the size of array: " << endl;
    cin >> n;
    int A[n], B[n];
    cout << "input elements of A" << endl;
    input(A, n);
    cout << "input elements of B" << endl;
    input(B, n);

    int indexA = 0, indexB = 0;
    int minA = INT32_MAX, minB = INT32_MAX;
    int min2A = INT32_MAX, min2B = INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        if (minA > A[i])
        {
            min2A = minA;
            minA = A[i];
            indexA = i;
        }
        else if (min2A > A[i])
        {
            min2A = A[i];
        }
        if (minB > B[i])
        {
            min2B = minB;
            minB = B[i];
            indexB = i;
        }
        else if (min2B > B[i])
        {
            min2B = B[i];
        }
    }
    /*cout<<"index "<<indexA<<" "<<indexB<<endl;
    cout<<"min "<<minA<<" "<<minB<<endl;
    cout<<"min2 "<<min2A<<" "<<min2B<<endl;*/
    if (indexA != indexB)
    {
        cout << "ans" << minA + minB;
    }
    else
    {
        cout << "ans" << min(min2A + minB, minA + min2B);
    }
    return 0;
}