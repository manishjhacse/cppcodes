#include<iostream>
using namespace std;
class PowerFinder
{
    public:
    void Power(int x = 1, int y = 1)
    {
        int P = 1, i = 1;
        while(++i <= y)
        {
            P *= x;
        }
        cout<< P << endl;
    }
};
int main()
{
    PowerFinder FP;
    FP.Power(2, 6);
    return 0;
}