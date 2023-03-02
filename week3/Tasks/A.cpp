#include <iostream>
using namespace std;
#ifndef N
#define N 7
#endif

void selectSort(int (&a)[N])
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


void vvo(int (&a)[N])
  {
    int k;
    for(int i = 0; i < N; i++)
    {
        cin >> k;
        a[i] = k;
    }
}

void vyv(int a[N])
{
    for(int i = 0; i < N; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int a[N];
    vvo(a);
    selectSort(a);
    vyv(a);
}
