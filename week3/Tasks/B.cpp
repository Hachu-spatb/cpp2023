#include <iostream>
using namespace std;
#ifndef N
#define N 9
#endif

void doubleSelectSort(int (&a)[N])
{
    for (int i = 0; i < N - 1; i++)
    {
        int minn = i;
        for (int j = i + 1; j < N; j++)
        {
            if (a[j] < a[minn])
            {
                minn = j;
            }
        }
        if (minn != i)
        {
            swap(a[i], a[minn]);
        }
    }
}

void vyv(int a[N])
{
    for(int i = 0; i < N; i++)
    {
        cout << a[i] << " ";
    }
}

void vvod(int (&a)[N])
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
    vvod(a);
    doubleSelectSort(a);
    vyv(a);
}
