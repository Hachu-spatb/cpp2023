#include <iostream>
using namespace std;
#ifndef N
#define N 7
#endif



int Max(int a[], int n)
{
    int minn;
    int i;
    for (minn = 0, i = 0; i < n; ++i)
        if (a[i] > a[minn])
            minn = i;
    return minn;
}

void pov(int b[], int i)
{
    int t, beg = 0;
    while (beg < i)
    {
        t = b[beg];
        b[beg] = b[i];
        b[i] = t;
        beg = beg + 1;
        i = i - 1;
    }
}
  

void doubleSelectSort(int (&a)[N])
{
    for (int i = N; i > 1; i = i - 1)
    {
        int minn = Max(a, i);
        if (minn != i - 1)
        {
            pov(a, minn);
            pov(a, i - 1);
        }
    }
}
  

void print(int a[N])
{
    for(int i = 0; i < N; i++)
    {
        cout << a[i] << " ";
    }
}

void vvo(int (&a)[N])
{
    int k;
    for(int i = 0; i < N; i++)
    {
        cin >> k;
        a[i] = k;
    }
}

int main()
{
    int a[N];
    vvo(a);
    doubleSelectSort(a);
    print(a);
}
