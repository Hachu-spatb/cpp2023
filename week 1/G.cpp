#include <iostream>
using namespace std;
int main()
{
    int N, a, b, c;
    int mmin=0; 
    int mmax=0;
    cin >> N;
    cin >> a >> b;
    while(N-2>0)
    {
        cin >> c;
        if ((b>=a)and(b>=c))
        {
            mmax++;
        }
        else if ((b<=a)and(b<=c)){
            mmin++;
        }
        a = b;
        b = c;
        N--;
    }
    if (mmax>mmin)
    {
        cout << "MAX";
    }
    else if (mmin>mmax)
    {
        cout << "MIN";
    }
    else
    {
        cout << "EQUAL";
    }
    return 0;
}
